namespace trees{
	template<typename T> class fenwick{
		public:
			const size_t MxN = 100010;
			T tree[100010];
			void update(size_t i, T val){
				for(; i<=MxN; i+=i&-i){
					tree[i] += val;
				}	
			}
			T query(size_t i){
				int sum = 0;
				for(; i>0; i-=i&-i){
					sum += tree[i];
				}
				return sum;
			}
			T lb(T t){
				size_t l=0, r=MxN;
				while(l < r){
					size_t mid = (1 + l + r)/2;
					if(query(mid) <= t){
						r = mid - 1;
					}
					else{
						l = mid;
					}
				}
				return l + 1;
			}
			T ub(T t){
				size_t l=0, r=MxN;
				while(l < r){
					size_t mid = (1 + l + r)/2;
					if(query(mid) < t){
						r = mid - 1;
					}
					else{
						l = mid;
					}
				}
				return l + 1;
			}
	};

	template <typename T> class lazy_segment{
		public:
			const size_t MxN = 100010;
			T tree[400040], lazy[100010];
			void update(size_t l, size_t r, size_t now, size_t ll, size_t rr, T v){
				if(r < ll || l > rr){
					return ;
				}
				if(ll <= l && r <= rr){
					tree[now] += v;
					if(l != r){
						lazy[now * 2] += v;
						lazy[now*2 + 1] += v;
					}
					return ;
				}
				size_t mid = (l + r) / 2;
				update(l, mid, now*2, ll, rr, v);
				update(mid+1, r, now*2+1, ll, rr, v);
				tree[now] = tree[now*2] + tree[now*2+1];
			}
			T read_point(size_t l, size_t r, size_t now, size_t idx){
				if(lazy[now]){
					tree[now] += lazy[now];
					if(l != r){
						lazy[now*2] += lazy[now];
						lazy[now*2+1] += lazy[now];
					}
					lazy[now] = 0;
				}
				if(l == r){
					return tree[now];
				}
				size_t mid = (l + r) / 2;
				if(idx <= mid){
					return read_point(l, mid, now*2, idx);
				}
				else{
					return read_point(mid+1, r, now*1, idx);
				}
			}
			T read_range(size_t l, size_t r, size_t now, size_t ll, size_t rr){
				if(r < ll || l > rr){
					return 0;
				}
				if(lazy[now]){
					tree[now] += lazy[now];
					if(l != r){
						lazy[now*2] += lazy[now];
						lazy[now*2+1] += lazy[now];
					}
					lazy[now] = 0;
				}
				if(ll <= l && r <= rr){
					return tree[now];
				}
				int mid = (l + r)/2;
				return read_range(l, mid, now*2, ll, rr) + read_range(mid+1, r, now*2+1, ll, rr);
			}
	};

	template <typename T> class binary_search{
		T data;
		binary_search *l, *r;
		public:
			binary_search(): data(0), l(NULL), r(NULL) {}
			binary_search(T val){
				data = val;
				l = r = NULL;
			}
			binary_search* insert(binary_search* root, T val){
				if(!root){
					return new binary_search(val);
				}
				if(val > root->data){
					root->r = insert(root->r, val);
				}
				else{
					root->l = insert(root->l, val);
				}
				return root;
			}
			void inorder(binary_search* root){
				if(!root){
					return ;
				}
				inorder(root->l);
				cout << root->data << endl;
				inorder(root->r);
			}
			void postorder(binary_search* root){
				if(!root){
					return ;
				}
				inorder(root->l);
				inorder(root->r);
				cout << root->data << endl;
			}
			void preorder(binary_search* root){
				if(!root){
					return ;
				}
				cout << root->data << endl;
				inorder(root->l);
				inorder(root->r);
			}
	};
}
// Writte by Hydrolyzed~

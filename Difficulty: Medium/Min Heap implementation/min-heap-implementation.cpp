class minHeap {
  private:
    vector<int> v;

  public:
    minHeap() {
        v.clear();
    }

    void push(int x) {
        v.push_back(x);
        int i = v.size() - 1;

        while (i > 0) {
            int p = (i - 1) / 2;   // ✅ fixed
            if (v[p] > v[i]) {
                swap(v[p], v[i]);
                i = p;
            } else {
                break;
            }
        }
    }

    void pop() {
        if (v.empty()) return;   // ✅ safety check

        int N = v.size();
        swap(v[0], v[N - 1]);
        v.pop_back();
        N--;

        int i = 0;
        while (2 * i + 1 < N) {
            int mini = 2 * i + 1;

            // ✅ choose smaller child
            if (2 * i + 2 < N && v[2 * i + 2] < v[2 * i + 1]) {
                mini = 2 * i + 2;
            }

            // ✅ min-heap condition
            if (v[mini] < v[i]) {
                swap(v[mini], v[i]);
                i = mini;
            } else {
                break;
            }
        }
    }

    int peek() {
        if (v.empty()) return -1;   // ✅ fixed
        return v[0];
    }

    int size() {
        return v.size();
    }
};

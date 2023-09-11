#include <cstdio>
#include <map>
std::map<intptr_t, const char*> m;
void print_lower_bound(intptr_t key) {
    auto it = m.lower_bound(key);
    if (it == m.end()) {
        fprintf(stderr, "lower_bound for %zd is at end\n", key);
    } else {
        fprintf(stderr, "lower_bound for %zd is at key %zd\n", key, it->first);
    }
}
int main() {
    m.insert({0, ""});
    m.insert({2, ""});
    m.insert({10, ""});
    print_lower_bound(-1);
    print_lower_bound(0);
    print_lower_bound(1);
    print_lower_bound(3);
    print_lower_bound(9);
    print_lower_bound(10);
    print_lower_bound(11);
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l,int r) {

    if (l>r) {
        cout << "Error l>r\n";
        assert(l>r);
    }

    return l+abs((int)rng()%(r-l+1));

}
void longspan() {
    std::vector<int> myvec = getVect();

    std::sort(myvec.begin(), myvec.end());

    int longestSpan = 0;
    for (std::vector<int>::iterator iter1 = myvec.begin(); iter1 != myvec.end(); iter1++) {
        // Print the current value to debug
        std::cout << *iter1 << std::endl;
    }
}
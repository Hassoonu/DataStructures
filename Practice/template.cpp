template <typename T> // tells program this function is a template
T max(T a, T b){ // write program with template variable
    T result;
    result = (a > b) ? a : b;
    return result
}

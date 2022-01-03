std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> res;
    if (n < signature.size()){
        for (int i = 0; i < n; ++i)
            res.push_back(signature[i]);
        return res;
    }
    res = signature;
    for (int i = signature.size(); i < n; ++i)
        res.push_back(res[res.size() - 1] + res[res.size() - 2] + res[res.size() - 3]);
    return res;
}

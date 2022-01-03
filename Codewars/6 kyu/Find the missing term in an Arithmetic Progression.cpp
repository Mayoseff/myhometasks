long findMissing(std::vector<long> list) {
    if (list.size() >= 3){
        long q_1 = list[1] - list[0];
        long q_2 = list[list.size() - 1] - list[list.size() - 2];
        long q = (abs(q_1) > abs(q_2)) ? q_2 : q_1;

        std::cout << "q = " << q << std::endl;

        for (long i = 1; i < list.size(); ++i){
            if (list[i] - q != list[i - 1]){
                return list[i] - q;
                break;
            }
        }
    }
}

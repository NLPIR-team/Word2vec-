#include <iostream>
#include <word2vec.hpp>
using namespace std;

int main()
{

    int state=InitWord2vec("Data","");
    cout << state<< endl;
    InitPara(200,"corpus.txt", "words-all.txt", 1, 0.025, "vectors.txt", 8, 1e-4, 1, 25, 1, 15, 1);
    Train();
    LoadModel("vectors.txt");
    const char * result= CalculateWord("中国",10);
    std::cout<<result<<std::endl;
    return 0;
}

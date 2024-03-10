template<class T>
T horner(T a[], int n, const T& x)
{// 利用霍纳法则（秦九昭算法）计算n阶多项式在点x处的值,系数为a[0:n]
    T value = a[n];
    for (int i = 1; i <= n; i++)
        value = value * x + a[n - i];
    return value;
}
/***********************************************************************/
#include <iostream>
using namespace std;

template<class T>
void permutations(T list[], int k, int m)
{//生成list[k:m]的所有序列
    if (k == m)//list[k:m]仅有一个排列，输出它
    {
        for (int i = 0; i <= m; i++)
        {
            cout << list[i];
        }
        cout << endl;

    }
    else//list[k:m]有多个排列，递归生成这些排列
    {
        for (int i = k; i <= m; i++)
        {
            T temp;
            temp = list[k];
            list[k] = list[i];
            list[i] = temp;
            permutations(list, k + 1, m);
            temp = list[k];
            list[k] = list[i];
            list[i] = temp;
        }
    }
}

/***********************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int array[6] = { 5,2,4,6,1,3 };
    for (int j = 1; j < 6; j++)               //j为关键元素，即当前需要排序的元素，从左往右第二个开始，一直到最后一个元素
    {
        int key = array[j];             //把需要进行操作的元素提取出来
        int i = j - 1;                  //后面用i来表示索引小于关键元素的元素
        while (i >= 0 && array[i] > key)      //这里i必须要取等于0，不然无法对第一个元素进行检测
        {
            array[i + 1] = array[i];    //将比关键元素大的元素后移
            i--;                        //遍历
        }
        array[i + 1] = key;             //因为在跳出循环前最后进行了i--运算，所以array[i+1]是关键元素应该待的位置而不是array[i]
    }
    for (int i = 0; i < 6; i++)         //遍历输出
    {
        cout << array[i] << "\t";
    }

}

/***********************************************************************/
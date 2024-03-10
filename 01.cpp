template<class T>
T horner(T a[], int n, const T& x)
{// ���û��ɷ����ؾ����㷨������n�׶���ʽ�ڵ�x����ֵ,ϵ��Ϊa[0:n]
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
{//����list[k:m]����������
    if (k == m)//list[k:m]����һ�����У������
    {
        for (int i = 0; i <= m; i++)
        {
            cout << list[i];
        }
        cout << endl;

    }
    else//list[k:m]�ж�����У��ݹ�������Щ����
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
    for (int j = 1; j < 6; j++)               //jΪ�ؼ�Ԫ�أ�����ǰ��Ҫ�����Ԫ�أ��������ҵڶ�����ʼ��һֱ�����һ��Ԫ��
    {
        int key = array[j];             //����Ҫ���в�����Ԫ����ȡ����
        int i = j - 1;                  //������i����ʾ����С�ڹؼ�Ԫ�ص�Ԫ��
        while (i >= 0 && array[i] > key)      //����i����Ҫȡ����0����Ȼ�޷��Ե�һ��Ԫ�ؽ��м��
        {
            array[i + 1] = array[i];    //���ȹؼ�Ԫ�ش��Ԫ�غ���
            i--;                        //����
        }
        array[i + 1] = key;             //��Ϊ������ѭ��ǰ��������i--���㣬����array[i+1]�ǹؼ�Ԫ��Ӧ�ô���λ�ö�����array[i]
    }
    for (int i = 0; i < 6; i++)         //�������
    {
        cout << array[i] << "\t";
    }

}

/***********************************************************************/
#include<iostream>                                 //����ͷ�ļ�
#include<stdlib.h>


double fuc(double x, double y)                        //���庯��
{
        if(y==0)
        {
            throw y;                                    //����Ϊ0���׳��쳣
        }
        return x/y;                                    //���򷵻�����������
}
    int main()
    {
        double res;
        try                                            //�����쳣
        {
            res=fuc(2,3);
            std::cout<<"The result of x/y is : "<<res<<std::endl;
            res=fuc(4,0);                                //�����쳣
        }
        catch(double)                                    //���񲢴����쳣
        {
           std::cerr<<"error of dividing zero.\n";
           exit(1);                                    //�쳣�˳�����
        }
		return 0;
   }
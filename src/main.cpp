bool is_sub_array(int array1[], int size1, int array2[], int size2)
{
    bool answer = 0;
    if(size1 >= size2)
    {
        for(int i = 0; i < size1; i++)
        {
            for(int j = 0; j < size2; j++)
            {
                if(array2[j] == array1[i])
                {
                    answer = 1;
                }
            }
        }
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}
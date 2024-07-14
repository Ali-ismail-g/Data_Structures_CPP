import java.util.Arrays;

public class InsertionSortingImpl {
    public void sorting(int[] arr){
        int key = 0;
        for(int i=0;i< arr.length;i++){
            key = arr[i];
            int j;
            for(j=i-1;j>=0;j--){
                if(arr[j]>key){
                    arr[j+1] = arr[j];
                }else break;
            }
            arr[j+1] = key;
        }
        System.out.println(Arrays.toString(arr));
    }
}

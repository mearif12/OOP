class out11{public static void main(String[] args){
   // 1D array declaring: data-type[] arrayName = {val1, val2, val3,……. valN};
   
   String[] city = {"dhaka","delhi","dubai"};
   int[] numbers = {1,2,3,4,5,6,7,8};
   
   System.out.println(city.length);
   System.out.println(city[0]);
   System.out.println(numbers[3]);

   //2D array declaring: data-type[][] arrayName = {{1st set},{2nd set},....};
      int[][] objects = {{1,2,3}, {4,5,6}};

      System.out.println(objects[1][2]);//6
      
        for (int i = 0; i < objects.length; i++) {
            for (int j = 0; j < objects[i].length; j++) {
                  System.out.print(objects[i][j] + "\t");
            }
            System.out.println();
        }  
}}

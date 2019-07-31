/*************************************************************************
	> File Name: 119.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 20时17分25秒
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>

int main() {
    int y, m, d;
	while(scanf("%d%d%d", &y, &m, &d) != EOF) {
	
		if(m == 5||m == 7|| m == 10) {
		    if(1 < d && d < 31) {
			  printf("%d%d%d\n", y, m, d - 1);
			  printf("%d%d%d\n", y, m, d+1);
			}
			if(d == 1) {
				printf("%d%d%d\n", y, m - 1, 30);
			    printf("%d%d%d\n", y, m, 2);
			}
			if(d == 31) {
			    printf("%d%d%d\n", y, m, 30);
			    printf("%d%d%d\n", y, m+1, 1);
			}
		    
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11) {
		          if(1 < d && d < 30) {
			        printf("%d%d%d\n", y, m, d - 1);
			        printf("%d%d%d\n", y, m, d+1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, m - 1, 31);
			        printf("%d%d%d\n", y, m, 2);
			}
			      if(d == 30) {
			        printf("%d%d%d\n", y, m, 29);
			        printf("%d%d%d\n", y, m+1, 1);
			}
		
		}
		
		else if(m == 1) {
		          if(1 < d && d < 31) {
			        printf("%d%d%d\n", y, 1, d - 1);
			        printf("%d%d%d\n", y, 1, d+1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y-1, 12, 31);
			        printf("%d%d%d\n", y, 1, 2);
			}
			      if(d == 31) {
			        printf("%d%d%d\n", y, 1, 30);
			        printf("%d%d%d\n", y, 2, 1);
			}
		
		}
		
		else if(m == 12) {
		          if(1 < d && d < 31) {
			        printf("%d%d%d\n", y, 12, d - 1);
			        printf("%d%d%d\n", y, 12, d+1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, 11, 30);
			        printf("%d%d%d\n", y, 12, 2);
			}
			      if(d == 31) {
			        printf("%d%d%d\n", y, 12, 30);
			        printf("%d%d%d\n", y+1, 1, 1);
			}
		
		}
		
		else if(m == 8) {
		          if(1 < d && d < 31) {
			        printf("%d%d%d\n", y, 8, d - 1);
			        printf("%d%d%d\n", y, 8, d + 1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, 7, 31);
			        printf("%d%d%d\n", y, 8, 2);
			}
			      if(d == 31) {
			        printf("%d%d%d\n", y, 8, 30);
			        printf("%d%d%d\n", y, 9, 1);
			}
		
		}
		else if((y % 100 != 0 && y % 4 == 0)|| y % 400 == 0) {
			      if(m == 2) {
				  if(1 < d && d < 29) {
			        printf("%d%d%d\n", y, 2, d - 1);
			        printf("%d%d%d\n", y, 2, d + 1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, 1, 31);
			        printf("%d%d%d\n", y, 2, 2);
			}
			      if(d == 29) {
			        printf("%d%d%d\n", y, 2, 28);
			        printf("%d%d%d\n", y, 3, 1);
			}
		
				  
				  }
			      if(m == 3) {
				  if(1 < d && d < 31) {
			        printf("%d%d%d\n", y, 3, d - 1);
			        printf("%d%d%d\n", y, 3, d + 1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, 2, 29);
			        printf("%d%d%d\n", y, 3, 2);
			}
			      if(d == 31) {
			        printf("%d%d%d\n", y, 3, 30);
			        printf("%d%d%d\n", y, 4, 1);
			}
		
				  
				  }
		
		}
		else if(!(y % 100 != 0 && y % 4 == 0)|| y % 400 == 0) {
			      if(m == 2) {
				  if(1 < d && d < 28) {
			        printf("%d%d%d\n", y, 2, d - 1);
			        printf("%d%d%d\n", y, 2, d + 1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, 1, 31);
			        printf("%d%d%d\n", y, 2, 2);
			}
			      if(d == 28) {
			        printf("%d%d%d\n", y, 2, 27);
			        printf("%d%d%d\n", y, 3, 1);
			}
		
				  
				  }
			      if(m == 3) {
				  if(1 < d && d < 31) {
			        printf("%d%d%d\n", y, 3, d - 1);
			        printf("%d%d%d\n", y, 3, d + 1);
			}
			      if(d == 1) {
				    printf("%d%d%d\n", y, 2, 28);
			        printf("%d%d%d\n", y, 3, 2);
			}
			      if(d == 31) {
			        printf("%d%d%d\n", y, 3, 30);
			        printf("%d%d%d\n", y, 4, 1);
			}
		
				  
				  }
		
		}
		
		
		
	
	
	}
    return 0;
}

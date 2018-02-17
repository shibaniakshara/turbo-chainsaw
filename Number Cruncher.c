#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int x,y;
    printf("===============================================================\n");
    printf("                       NUMBER CRUNCHER                         \n");
    printf("===============================================================\n\n");
    printf("**Categories**\n\n1.ALGEBRA\n2.GEOMETRY\n3.UNIT CONVERSIONS\n4.FINANCE\n5.ENGINEERING\n6.HEALTH\n7.NORMAL CALCULATOR\n");
    printf("\nEnter your choice:");
    scanf("%d",&x);
    printf("\n");
    switch(x)
    {
        case 1:
        {   
            printf("**ALGEBRA**\n\n");
            printf("Select the function\n1.DISCOUNT CALCULATION\n2.PERCENTAGE INCREASE/DECREASE\n3.LINEAR EQUATION\n4.QUADRATIC EQUATION\n5.FRACTION SIMPLIFIER\n6.RANDOM NUMBER GENERATOR\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
                case 1:
                {
                    int k,q,r,s;
                    printf("\n**DISCOUNT CALCULATOR**\n\n");
                    printf("Enter the price of item:");
                    scanf("%d",&k);
                    printf("Enter discount percentage:");
                    scanf("%d",&q);
                    r=(q*k)/100;
                    s=(k-r);
                    printf("Discounted price:%d \n",s);
                    printf("Discounted amount:%d",r);
                    break;
                }
                case 2:
                {
                    float p,q,r,z;
                    printf("\n**PERCENTAGE INCREASE/DECREASE CALCULATOR**\n\n");
                    printf("Enter initial percentage");
                    scanf("%f",&p);
                    printf("Enter final percentage");
                    scanf("%f",&q);
                    r=q-p;
                    z=r/p;
                    if(r<=0)
                    {
                    printf("Percentage decrease is %.f%",(z*100));
                    }
                    else
                    {
                     printf("Percentage increase is %.f%",(z*100));
                    }
                    break;
                }
                case 3:
                {
                    float a1, b1, c1, x,y,a2,b2,c2;
                    printf("\n**LINEAR EQUATION SOLVER**\n\n");
                    printf("Enter a linear equation in one variable of the form a1x + b1y + c1 = 0 ");
                    printf("\nEnter the value of a1, b1, c1 respectively:\n");
                    scanf("%f%f%f", &a1, &b1, &c1);
                    printf("\nEnter a linear equation in one variable of the form a2X + b2Y + c2 = 0 ");
                    printf("\nEnter the value of a2, b2, c2 respectively:\n");
                    scanf("%f%f%f", &a2, &b2, &c2);
                    x = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
                    y = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);
                    printf("\nSolution is x = %f y=%f", x,y);
                    break;
                }
                case 4:
                {
                    double a, b, c, d, root1,root2, realPart, imaginaryPart;
                    printf("\n**QUADRATIC EQUATION SOLVER**\n\n");
                    printf("Enter coefficients a, b and c:\n");
                    scanf("%lf %lf %lf",&a, &b, &c);
                    d = b*b-4*a*c;
                    if (d > 0)
                    {
                        root1 = (-b+sqrt(d))/(2*a);
                        root2 = (-b-sqrt(d))/(2*a);
                
                        printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
                    }
                    else if (d == 0)
                    {
                        root1 = root2 = -b/(2*a);
                
                        printf("root1 = root2 = %.2lf;", root1);
                    }
                    else
                    {
                        realPart = -b/(2*a);
                        imaginaryPart = sqrt(-d)/(2*a);
                        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
                    }break;
                }
                case 5:
                {
                    int x1, x2, gcd;
                    printf("\n**FRACTION SIMPLIFIER\n**");
                    printf("Enter the value for x and y(x/y):\n");
                    scanf("%d%d", &x1, &x2);
                    if (x1 < x2) {
                            gcd = x1;
                    } else {
                            gcd = x2;
                    }
                    if (x1 == 0 || x2 == 0) {
                            printf("Simplified fraction is %s\n", x1?"Infinity":"0");
                    }
                    while (gcd > 1) {
                            if (x1 % gcd == 0 && x2 % gcd == 0)
                                    break;
                            gcd--;
                    }
                    printf("Simplified fraction %d/%d\n", x1 / gcd, x2 / gcd);
                    break;
                 }
                 case 6:
                 {
                      int n, r, h, i;
                      printf("\n**RANDOM NUMBER GENERATOR**\n\n");
                      srand (time (NULL));		
                      printf ("Enter the maximum number:");
                      scanf ("%d", &n);
                      printf ("Enter the number of random numbers required:");
                      scanf ("%d", &h);
                      printf("Random numbers are:\n");
                      for (i = 0; i < h; i++)
                        {
                          r = rand () % n;		
                          printf ("%i\n", r);
                        }
                     break;
                 }
            }
            break;
        }
        case 2:
        {   printf("\n**GEOMETRY**\n\n");
            printf("Select the function\n7.PERIMETER AND AREA CALCULATION\n8.VOLUME CALCULATION\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
                case 7:
                {
                    
                      int f;
                      float peri, area;
                      printf ("Please choose from following calculcations.\n");
                      printf ("1.RECTANGLE\n");
                      printf ("2.CIRCLE\n");
                      printf ("3.SQUARE\n");
                      printf ("4.TRIANGLE\n");
                      printf("\nEnter your choice:");
                      scanf ("%d", &f);
                      switch (f)
                        {
                        case 1:
                          {
                    	float length, width;
                    	printf ("Enter length of Rectangle:");
                    	scanf ("%f", &length);
                    	printf ("Enter width of Rectangle:");
                    	scanf ("%f", &width);
                    	area = length * width;
                    	peri = 2 * (length + width);
                    	printf ("Perimeter of Rectangle : %0.4f\nArea of Rectangle : %0.4f\n",
                    		peri, area);
                    	break;
                          }
                        case 2:
                          {
                    	float rad, area;
                    	printf ("Enter radius of circle: ");
                    	scanf ("%f", &rad);
                    	area = 3.14 * rad * rad;
                    	peri = 2 * 3.14 * rad;
                    	printf ("Perimeter of circle : %0.4f\nArea of circle : %0.4f\n",
                    		peri, area);
                    	break;
                          }
                        case 3:
                          {
                    	float side;
                    	printf ("Enter length of a side of square :");
                    	scanf ("%f", &side);
                    	area = side * side;
                    	peri = 4 * side;
                    	printf ("Perimeter of square : %0.4f\nArea of square : %0.4f\n",
                    		peri, area);
                    	break;
                          }
                        case 4:
                          {
                    	float a, b, c, s;
                    
                    	printf ("\nPlease Enter three sides of triangle\n");
                    	scanf ("%f%f%f", &a, &b, &c);
                    
                    	peri = a + b + c;
                    	s = (a + b + c) / 2;
                    	area = sqrt (s * (s - a) * (s - b) * (s - c));
                    
                    	printf ("Perimeter of triangle : %0.4f\nArea of triangle : %0.4f\n",
                    		peri, area);
                    	break;
                          }
                        }
                    break;
                }
                case 8:
                {
                    int f;
                      float vol;
                      printf ("Please choose from following calculcations.\n");
                      printf ("1.CUBE\n");
                      printf ("2.CUBOID\n");
                      printf ("3.PRISM\n");
                      printf ("4.CYLINDER\n");
                      printf ("5.CONE\n");
                      printf ("6.SPHERE\n");
                      printf("\nEnter your choice:");
                      scanf ("%d", &f);
                      switch (f)
                        {
                        case 1:
                          {
                              float side;
                    	printf("Enter length of a side of square:");
                    	scanf("%f", &side);
                    	vol = side*side*side;
                    	printf ("Volume of cube : %0.4f",vol);
                    	break;
                        
                          }
                        case 2:
                          {
                              float l,b,h;
                        	printf("Enter length,breadth,height of the cuboid:\n");
                        	scanf("%f%f%f",&l,&b,&h);
                        	vol = l*b*h;
                        	printf ("Volume of cuboid : %0.4f",vol);
                        	break;
                            
                              }
                            case 3:
                              {
                        	float b,h;
                        	printf("Enter base and height of prism:\n");
                        	scanf("%f%f",&b,&h);
                        	vol = b*h;
                        	printf ("Volume of prism : %0.4f",vol);
                        	break;
                              }
                            case 4:
                              {
                            float r,h;
                        	printf("Enter radius and height of cylinder:\n");
                        	scanf("%f%f",&r,&h);
                        	vol = 3.14*r*r*h;
                        	printf ("Volume of cylinder : %0.4f",vol);
                        	break;
                              }
                              case 5:
                              {
                            float b,h;
                        	printf ("Enter base and height of cone:\n");
                        	scanf("%f%f",&b,&h);
                        	vol = 0.3333*b*h;
                        	printf ("Volume of cone : %0.4f",vol);
                        	break;
                              }
                              case 6:
                              {
                            float r;
                        	printf ("Enter radius of sphere:");
                        	scanf("%f",&r);
                        	vol = 3.14*r*r*r*1.3333;
                        	printf ("Volume of sphere : %0.4f",vol);
                        	break;
                              }
                              break;
                        }
                    break;
                }
            }
            break;
        }
        case 3:
        {   printf("\n**UNIT CONVERSION**\n\n");
            printf("Select the function\n9.ANGLE CONVERSION\n10.DATA TRANSFER SPEED\n11.TIME CONVERSION\n12.TEMPERATURE CONVERSION\n13.LENGTH CONVERSION\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
            case 9:
            {
                
                int k;
                float rad, deg;
                printf("\n**ANGLE CONVERTER**\n\n");
                printf ("Select the unit of input");
                printf ("\n1.Radian\n2.Degree\n");
                printf("\nEnter your choice:");
                scanf ("%d", &k);
                switch (k)
                {
                case 1:
                 {
                    printf ("Enter the data in Radian.\n");
                	scanf ("%f", &rad);
                	deg = (180 / 3.14) * rad;
                	printf ("\nDegree:%f", deg);
                	break;
                 }
                case 2:
                 {
                	printf ("Enter the data in Degree.\n");
                	scanf ("%f", &deg);
                	rad = (3.14 / 180) * deg;
                	printf ("\nRadian:%f", rad);
                	break;
                 }
                }
                break;
            }
            case 10:
            {
              int b;
              float mbps, kbps, bps, tbps, gbps;
              printf("\n**DATA TRANSFER RATE CONVERTER**\n\n");
              printf ("Select the input unit\n1.Mbps\n2.Kbps\n3.Bps\n4.Tbps\n5.Gbps\n");
              printf("\nEnter your choice:");
              scanf ("%d", &b);
              switch (b)
                {
                case 1:
                  {
            	printf ("Enter the data:");
            	scanf ("%f", &mbps);
            	kbps = mbps * 1000;
            	bps = mbps * 1000000;
            	tbps = mbps / 1000000;
            	gbps = mbps / 1000;
            	printf ("Kbps:%f\nBps:%f\nTbps:%f\nGbps:%f\n", kbps, bps, tbps, gbps);
            	break;
                  }
                case 2:
                  {
            	printf ("Enter the data:");
            	scanf ("%f", &kbps);
            	mbps = kbps / 1000;
            	bps = kbps * 1000;
            	tbps = kbps / 1000000000;
            	gbps = kbps / 1000000;
            	printf ("Mbps:%f\nBps:%f\nTbps:%f\nGbps:%f\n", mbps, bps, tbps, gbps);
            	break;
                  }
                case 3:
                  {
            	printf ("Enter the data:");
            	scanf ("%f", &bps);
            	mbps = bps / 1000000;
            	kbps = bps / 1000;
            	tbps = bps / 1000000000000;
            	gbps = bps / 1000000000;
            	printf ("Mbps:%f\nKbps:%f\nTbps:%f\nGbps:%f\n", mbps, kbps, tbps,
            		gbps);
            	break;
                  }
                case 4:
                  {
            	printf ("Enter the data:");
            	scanf ("%f", &tbps);
            	mbps = tbps * 1000000;
            	kbps = tbps * 1000000000;
            	bps = tbps * 1000000000000;
            	gbps = tbps * 1000;
            	printf ("Mbps:%f\nKbps:%f\nBps:%f\nGbps:%f\n", mbps, kbps, bps, gbps);
            	break;
                  }
                case 5:
                  {
            	printf ("Enter the data:");
            	scanf ("%f", &gbps);
            	mbps = gbps * 1000;
            	kbps = gbps * 1000000;
            	bps = gbps * 1000000000;
            	tbps = gbps / 1000;
            	printf ("Mbps:%f\nKbps:%f\nBps:%f\nTbps:%f\n", mbps, kbps, bps, tbps);
            	break;
                  }
                }
                break;
            }
            
            case 11:
            {
              int k;
              float day, hou, min, sec;
              printf("\n**TIME CONVERTER**\n\n");
              printf ("Select the input unit");
              printf ("\n1.Days\n2.Hours\n3.Minutes\n4.Seconds\n");
              printf("\nEnter your choice:");
              scanf ("%d", &k);
              switch (k)
                {
                case 1:
                  {
            	printf ("Enter time in days.\n");
            	scanf ("%f", &day);
            	hou = day * 24;
            	min = day * 24 * 60;
            	sec = day * 24 * 60 * 60;
            	printf ("\nTime in hours:%f\nTime in minutes:%f\nTime in seconds:%f",
            		hou, min, sec);
            	break;
                  }
                case 2:
                  {
            	printf ("Enter time in hours.\n");
            	scanf ("%f", &hou);
            	day = hou / 24;
            	min = hou * 60;
            	sec = hou * 60 * 60;
            	printf ("\nTime in days:%f\nTime in minutes:%f\nTime in seconds:%f",
            		day, min, sec);
            	break;
                  }
                case 3:
                  {
            	printf ("Enter time in minutes.\n");
            	scanf ("%f", &min);
            	day = (min / 60) * 24;
            	hou = min / 60;
            	sec = min * 60;
            	printf ("\nTime in days:%f\nTime in hours:%f\nTime in seconds:%f",
            		day, hou, sec);
            	break;
                  }
                case 4:
                  {
            	printf ("Enter time in seconds.\n");
            	scanf ("%f", &sec);
            	hou = (sec / 60) / 60;
            	min = sec / 60;
            	day = (((sec / 60) / 60) / 24);
            	printf ("\nTime in days:%f\nTime in hours:%f\nTime in minutes:%f",
            		day, hou, min);
            	break;
                  }
                }
                break;
            }
            case 12:
            {   
                  int k;
                  float cel, fah, kelv;
                  printf("\n**TEMPERATURE CONVERTER**\n\n");
                  printf ("Select the unit of input");
                  printf ("\n1.Celsius\n2.Fahrenheit\n3.Kelvin\n");
                  printf("\nEnter your choice:");
                  scanf ("%d", &k);
                  switch (k)
                    {
                    case 1:
                      {
                	printf ("Enter the data in Celsius.\n");
                	scanf ("%f", &cel);
                	fah = (cel * 9 / 5) + 32;
                	kelv = cel + 273.15;
                	printf ("\nFahrenheit:%f\nKelvin:%f", fah, kelv);
                	break;
                      }
                    case 2:
                      {
                	printf ("Enter the data in Fahrenheit.\n");
                	scanf ("%f", &fah);
                	cel = (fah - 32) * 5 / 9;
                	kelv = (fah - 32) * 5 / 9 + 273.15;
                	printf ("\nCelsius:%f\nKelvin:%f", cel, kelv);
                	break;
                      }
                    case 3:
                      {
                	printf ("Enter the data in Kelvin.\n");
                	scanf ("%f", &kelv);
                	cel = kelv - 273.15;
                	fah = (kelv - 273.15) * 9 / 5 + 32;
                	printf ("\nCelsius:%f\nFahrenheit:%f", cel, fah);
                	break;
                      }
                    }
                break;
            }
            case 13:
            {
              int k;
              float cm, ft, in, m;
              printf("\n**LENGTH CONVERTER**\n\n");
              printf ("Select the input unit");
              printf ("\n1.Centimeter\n2.Foot\n3.Inch\n4.Meter\n");
              printf("\nEnter your choice:");
              scanf ("%d", &k);
              switch (k)
                {
                case 1:
                  {
            	printf ("Enter length in centimeter.\n");
            	scanf ("%f", &cm);
            	ft = cm * 0.033;
            	in = cm * 0.398;
            	m = cm * 100;
            	printf ("\nLength in feet:%f\nLength in inch:%f\nTime in meter:%f",
            		ft, in, m);
            	break;
                  }
                case 2:
                  {
            	printf ("Enter length in Foot.\n");
            	scanf ("%f", &ft);
            	cm = ft * 30.28;
            	in = ft * 12;
            	m = ft * 0.3048;
            	printf
            	  ("\nLength in centimeter:%f\nLength in inch:%f\nTime in meter%f",
            	   cm, in, m);
            	break;
                  }
                case 3:
                  {
            	printf ("Enter length in inch.\n");
            	scanf ("%f", &in);
            	cm = in / 0.3937;
            	ft = in / 12;
            	m = in / 39.37;
            	printf
            	  ("\nLength in centimeter:%f\nLength in foot:%f\nTime in meter:%f",
            	   cm, ft, m);
            	break;
                  }
                case 4:
                  {
            	printf ("Enter length in meter.\n");
            	scanf ("%f", &m);
            	cm = m / 100;
            	ft = m / 0.3048;
            	in = m / 0.0254;
            	printf
            	  ("\nLength in centimeter :%f\nLength in foot:%f\nTime in inch:%f",
            	   cm, ft, in);
            	break;
                  }
                
            }
            break;
            }} break;
        }
        case 4:
        
        {   printf("\n**FINANCE**\n\n");
            printf("Select the function\n14.VAT CALCULATOR\n15.ELECTRICITY COST CALCULATION\n16.LOAN CALCULATION\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
                case 14:
                {
                    float v,p,c;
                    printf("\n**VAT CALCULATOR**\n");
                    printf("Please enter the VAT percentage:\n");
                    scanf("%f",&v);
                    printf("Please enter the item value:\n");
                    scanf("%f",&p);
                    c=((1+(v/100))*p);
                    printf("The total price is %.f",c);
                    break;
                }
                case 15:
                {
                    int u;
                    float tot;
                    printf("\n**ELECTRICITY BILL CALCULATOR**\n");
                    printf("Enter the number of units as per meter:");
                    scanf("%d",&u);
                    if(u <= 50)
                            tot = u * 2.5;
                    else if(u <= 100)
                            tot = u * 3;
                    else if(u <= 200)
                           tot = u * 3.5;
                     else if(u <= 300)
                           tot = u * 4;
                     else if(u <= 400)
                           tot = u * 4.5;
                     else if(u <= 500)
                           tot = u * 4.75;
                     else
                           tot = u * 5;
                    printf("Electricity bill:Rs.%.2f", tot);
                    break;
                 }
                 case 16:
                 {
                     float a, p, r, i, m, y, tot;
                     printf("**LOAN CALCULATOR**\n");
                     printf ("Enter the loan amount: ");
                     scanf ("%f", &p);
                     printf ("Enter the rate: ");
                     scanf ("%f", &r);
                     printf ("Enter the numbre of years: ");
                     scanf ("%f", &y);
                     m = y * 12;
                     i = p * r / m;
                     a = (p + i) / m;
                     tot = p + i;
                     printf ("\n\n");
                     printf ("Total loan:%.2f\n", p);
                     printf ("Rate:%.f\n", r);
                     printf ("Total years:%.f\n", y);
                     printf ("Total interest:%.2f\n", i);
                     printf ("Monthly payment:%.2f\n", a);
                     printf ("Total payment:%.2f", tot);
                     break;
                 }
            }
            break;
        }
        case 5:
        {   printf("\n**ENGINEERING**\n\n");
            printf("Select the function\n17.OHM'S LAW CALCULATION\n18.SPEED/DISTANCE/TIME\n19.CIRCUIT RESISTANCE\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
                case 17:
                {
                    int f;
                    printf("\n**OHM'S LAW CALCULATOR**\n\n");
                    float voltage , current , resistance , result;
                    printf("Please choose from following calculcations.\n1.VOLTAGE\n2.CURRENT\n3.RESISTANCE\n");
                    printf("Enter your choice:");
                    scanf("%d",&f);
                    switch(f)
                    {
                    case 1 :
                    printf("please enter the current in amps.\n");
                    scanf("%f",&current);
                    printf("Now enter the resistance in ohms.\n");
                    scanf("%f",&resistance);
                    result = current * resistance;
                    printf("The voltage is %0.3f volts.\n",result);
                    break;
                    case 2 :
                    printf("please enter the voltage in volts.\n");
                    scanf("%f",&voltage);
                    printf("Now enter the resistance in ohms.\n");
                    scanf("%f",&resistance);
                    result = voltage / resistance;
                    printf("The current is %0.3f amps.\n",result);
                    break;
                    case 3 :
                    printf("please enter the voltage in volts.\n");
                    scanf("%f",&voltage);
                    printf("Now enter the current in amps.\n");
                    scanf("%f",&current);
                    result = voltage / current;
                    printf("The resistance is %0.3f ohms.\n",result);
                    break;
                    }
                break;
                }
                case 18:
                {
                    int f;
                    float speed ,distance ,timee , result;
                    printf("\n**SPEED/DISTANCE/TIME CALCULATOR**\n\n");
                    printf("Please choose from following calculcations.\n1.SPEED\n2.DISTANCE\n3.TIME\n");
                    printf("Enter your choice:");
                    scanf("%d",&f);
                    switch(f)
                    {
                    case 1 :
                    {
                    printf("please enter the distance.\n");
                    scanf("%f",&distance);
                    printf("Now enter the time.\n");
                    scanf("%f",&timee);
                    result = distance / timee;
                    printf("The speed is %0.3fkm/hr\n",result);
                    break;
                    }
                    case 2 :
                    {
                    printf("please enter the speed.\n");
                    scanf("%f",&speed);
                    printf("Now enter the time.\n");
                    scanf("%f",&timee);
                    result = speed*timee;
                    printf("The distance is %0.3fkm\n",result);
                    break;
                    }
                    case 3 :
                    {
                    printf("please enter the distance.\n");
                    scanf("%f",&distance);
                    printf("Now enter the speed.\n");
                    scanf("%f",&speed);
                    result = distance / speed;
                    printf("The time is %0.3fhour\n",result);
                    break;
                    }
                    }break;
                }
                case 19:
                {   
                    int i,n;
                    float sum=0.0,sum1=0.0,r[100];
                    printf("\n**RESISTANCE CALCULATOR\n\n");
                    printf("Enter the number of resistances:");
                    scanf("%d",&n);
                    printf("Enter the resistance values\n");
                    for(i=0;i<n;i++)
                    {   
                        printf("R%d:",i);
                        scanf("%f",&r[i]);
                    }
                    for(i=0;i<n;i++)
                    {
                        sum=sum+(1/r[i]);
                        sum1=sum1+r[i];
                    }printf("\n");
                    printf("Series connection:%fohms\n",sum1);
                    printf("Parllel connection:%fohms",(1/sum));
                    break;
                }
            }
            break;
        }
        case 6:
        {   printf("\n**HEALTH**\n\n");
            printf("Select the function\n");
            printf("20.BMI CALCULATION\n");
            printf("21:BODY FAT CALCULATION\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
                case 20:
                {
                    float w,h,bmi,x;
                     printf("\n**BMI CALCULATOR\n\n");
                    printf("Enter weight in kgs and height in meters\n");
                    scanf("%f%f",&w,&h);
                    bmi=w/(h*h);
                    x=bmi*10000;
                    printf("bmi: %f\n",x);
                    x<18.5?printf("Underweight"):(x<25)?printf("Normal weight"):(x<30)?printf("Overweight"):printf("Obesity");
                    break;
                }
                case 21:
                {
                     printf("\n**BODY FAT CALCULATOR\n\n");
                    int gen;
                       float bw,wr,wa,hi,fore;
                       float A,B,C,D,E,F,bodyfat,bodyfatparcentage;
                       printf("If you are woman than press'1'.If you are man than press'2'\n");
                       printf("Enter your choice");
                       scanf("%d",&gen);
                       switch(gen)
                       {
                                     case 1:
                             
                                    printf("Enter your body weight: ");
                                    scanf("%f",&bw);
                                    A=(bw*0.732)+8.987;
                                    printf("Enter your wrist measurement:");
                                    scanf("%f",&wr);
                                     B=(wr)/3.140;
                                    printf("Enter your waist measurement: ");
                                    scanf("%f",&wa);
                                     C=(wa)*0.157;
                                    printf("Enter your hip measurement: ");
                                   scanf("%f",&hi);
                                     D=(hi)*0.249;
                                     printf("Enter your forearm measurement: ");
                                    scanf("%f",&fore);
                                     E=(fore)*0.434;
                                    
                                     F=A+B-C-D+E;
                                     bodyfat=bw-F;
                                    printf("Body Fat is equal to =%f\n",bodyfat);
                                     bodyfatparcentage=(bodyfat*100)/bw;
                                    printf("Body Fat percentage is equal to=%f%",bodyfatparcentage);
                             
                              break;
                       case 2:
                                    
                                           printf("Enter your body weight: ");
                                           scanf("%f",&bw);
                                           A=(bw*1.082)+94.42;
                                           printf("Enter your wrist measurement: ");
                                           scanf("%f",&wr);
                                           B=(wr)*4.15;
                                           F=A-B;
                                           bodyfat=bw-F;
                                           printf("Body Fat is equal to =%f\n",bodyfat);
                                           bodyfatparcentage=(bodyfat*100)/bw;
                                           printf("Body Fat percentage is equal to =%f%",bodyfatparcentage);
                                           break;
                     
                       }
       
                    break;
                }
            }
            break;
        }
        default:
        {
            printf("\n**NORMAL CALCULATOR**\n\nEnter your choice\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.MODULUS\n6.POWER\n7.FACTORIAL\n");
            printf("\nEnter your choice:");
            scanf("%d",&y);
            switch(y)
            {
                case 1:
                {
                    int n, sum=0, k=0, number;
                    printf("\nEnter the number of elements you want to add:");
                    scanf("%d",&n);
                    printf("Please enter %d numbers one by one: \n",n);
                    while(k<n)
                    { 
                        scanf("%d",&number);
                        sum+=number;
                        k=k+1;
                    }
                    printf("Sum of %d numbers = %d \n",n,sum);
                    break;
                }
                case 2:
                {
                    int a, b, c = 0; 
                    printf("\nPlease enter first number:\n"); 
                    scanf("%d", &a); 
                    printf("Please enter second number:\n"); 
                    scanf("%d", &b); 
                    c = a - b; 
                    printf("\n%d - %d = %d\n", a, b, c);
                    break;
                }
                case 3:
                {
                    int a, b, mul=0; 
                    printf("\nPlease enter first numb   : "); 
                    scanf("%d", &a); 
                    printf("Please enter second number: "); 
                    scanf("%d", &b);
                    mul=a*b;
                    printf("\nMultiplication of entered numbers = %d\n",mul);
                    break;
                }
                case 4:
                {
                    float a, b, d=0; 
                    printf("\nPlease enter first number  : "); 
                    scanf("%f", &a); 
                    printf("Please enter second number : "); 
                    scanf("%f", &b);
                    d=a/b;
                    printf("\nDivision of entered numbers=%.3f\n",d);
                    break;
                }
                case 5:
                {
                    int a, b, d=0; 
                    printf("\nPlease enter first number   : "); 
                    scanf("%d", &a); 
                    printf("Please enter second number  : "); 
                    scanf("%d", &b);
                    d=a%b;
                    printf("\nModulus of entered numbers = %d\n",d);
                    break;
                }
                case 6:
                {
                    int a,num, p;
                    printf("\nEnter number to find the power \n");
                    printf("number: ");
                    scanf("%d",&a);
                    printf("power : ");
                    scanf("%d",&num);
                    p=pow(a,num);
                    printf("\n%d to the power %d = %d \n",a,num,p);
                    break;
                }
                case 7:
                {
                    int i,fact=1,num;
                    printf("\nEnter a number to find factorial : ");
                    scanf("%d",&num);
                    if (num<0)
                    {
                        printf("\nPlease enter a positive number to");
                        printf(" find factorial and try again. \n");
                        printf("\nFactorial can't be found for negative");
                        printf(" values. It can be only positive or 0  \n");
                        return 1;
                    }               
                     
                    for(i=1;i<=num;i++)
                    fact=fact*i;
                    printf("\n");
                    printf("Factorial of entered number %d is:%d\n",num,fact);
                    break;
                }
            }
            
        }
    }
  
}









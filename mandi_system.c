#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i=0,j=0,k=0;
	long unsigned int aadhar_no;
	char edit_crop,edit_variety,pay_choice,reg_choice,start_pro,reg_pay_choice,reg_sell_with,crop2_choice;
	float fifty_per,amount=0;
	struct farmer2
	{
		int crop_choice2,variety_choice2;
		float rem_amount2,weight2;
	} f2[100];
	struct crop
	{
		char name[20];
		int code1,code2,code3;
		float price1,price2,price3;
	} ;
	struct crop c1 = {"RICE",1545,1745,2005,3995.52,3521.12,4000.21};
	struct crop c2 = {"WHEAT",1223,4125,1089,2254.78,2500.32,2305.58};
	struct crop c3 = {"COTTON",1234,5678,9123,5050.56,6600.00,7412.01};
	struct farmer
	{
		long unsigned int aadhar,crop_choice,variety_choice;
		char name[100];
		float weight,rem_amount;
		struct crop c1,c2,c3;
		struct farmer2 f2[100];
	} f[100];
	while(1)
	{
		printf("Welcome to SONIPAT MANDI\n");
		printf("Are you already registered(y/n):");
		scanf(" %c",&reg_choice);
		if(reg_choice=='y')
		{
			printf("enter your aadhar number:");
			scanf("%lu",&aadhar_no);
			for(j=0;j<=i;j++)
			{
				if(aadhar_no==f[j].aadhar)
				{
					printf("Hello, %s\n",f[j].name);
					printf("would you like to sell more crops(y/n)\n");
					scanf(" %c",&reg_sell_with);
					if(reg_sell_with=='y')
					{
						while(i<100)
						{
							puts("Please weigh your crop and then visit again\n");
							printf("Welcome again\n");
							while(edit_crop!='n')
							{
								printf("Which crop did you sold ?\n");
								printf("enter 1 for %s, 2 for %s, 3 for %s\n",c1.name,c2.name,c3.name);
								scanf("%d",&f[j].f2[j].crop_choice2);
								printf("Do you want to edit your choice (y/n)");
								scanf(" %c",&edit_crop);	
							}
							if(f[j].f2[j].crop_choice2==1)
							{
								printf("you have chosen for crop %s\n",c1.name);
								while(edit_variety!='n')
								{
									printf("tell us about the variety of your crop\n");
									printf("enter 1 for variety %d, 2 for variety %d, 3 for variety %d:\n",c1.code1,c1.code2,c1.code3);
									scanf("%d",&f[j].f2[j].variety_choice2);
									printf("Do you want to edit your choice(y/n)\n");
									scanf(" %c",&edit_variety);
								}
								if(f[j].f2[j].variety_choice2==1)
								{
									
									printf("you have chosen for variety %d\n",c1.code1);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c1.price1*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c1.price1);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								if(f[j].f2[j].variety_choice2==2)
								{
									
									printf("you have chosen for variety %d\n",c1.code2);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c1.price2*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c1.price2);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								if(f[j].f2[j].variety_choice2==3)
								{
									
									printf("you have chosen for variety %d\n",c1.code3);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c1.price3*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c1.price3);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								
							}
							if(f[j].f2[j].crop_choice2==2)
							{
								printf("you have chosen for crop %s\n",c2.name);
								while(edit_variety!='n')
								{
									printf("tell us about the variety of your crop\n");
									printf("enter 1 for variety %d, 2 for variety %d, 3 for variety %d:\n",c2.code1,c2.code2,c2.code3);
									scanf("%d",&f[j].f2[j].variety_choice2);
									printf("Do you want to edit your choice(y/n)\n");
									scanf(" %c",&edit_variety);
								}
								if(f[j].f2[j].variety_choice2==1)
								{
									
									printf("you have chosen for variety %d\n",c2.code1);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c2.price1*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c2.price1);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								if(f[j].f2[j].variety_choice2==2)
								{
									
									printf("you have chosen for variety %d\n",c2.code2);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(f[i].weight*c2.price2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c2.price2);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								if(f[i].variety_choice==3)
								{
									
									printf("you have chosen for variety %d\n",c2.code3);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c2.price3*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c2.price3);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount has been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].rem_amount);
										printf("we wish your next visit soon\n");
									}
									
								}
							}
							if(f[j].f2[j].crop_choice2==3)
							{
							
								printf("you have chosen for crop %s\n",c3.name);
								while(edit_variety!='n')
								{
									printf("tell us about the variety of your crop\n");
									printf("enter 1 for variety %d, 2 for variety %d, 3 for variety %d:\n",c3.code1,c3.code2,c3.code3);
									scanf("%d",&f[j].f2[j].variety_choice2);
									printf("Do you want to edit your choice(y/n)\n");
									scanf(" %c",&edit_variety);
								}
								if(f[j].f2[j].variety_choice2==1)
								{
									
									printf("you have chosen for variety %d\n",c3.code1);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c3.price1*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c3.price1);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								if(f[j].f2[j].variety_choice2==2)
								{
									
									printf("you have chosen for variety %d\n",c3.code2);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(f[j].f2[j].weight2*c3.price2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c3.price2);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
									
								}
								if(f[j].f2[j].variety_choice2==3)
								{
									
									printf("you have chosen for variety %d\n",c3.code3);
									printf("enter total amount of your crop in QUNITALS:\n");
									scanf("%f",&f[j].f2[j].weight2);
									f[j].f2[j].rem_amount2=(c3.price3*f[j].f2[j].weight2)-amount;
									printf("cost of variety chosen by you is %f per quintal\n",c3.price3);
									printf("total payable amount is %f\n",f[j].f2[j].rem_amount2);
									printf("At this moment you can withdraw 50 percent of total payable amount\n");
									fifty_per=(f[j].f2[j].rem_amount2)/2;
									printf("Would you like to withdraw money(y/n)");
									scanf(" %c",&pay_choice);
									if(pay_choice=='y')
									{
										
										while(1)
										{
											printf("enter amount you would to withdraw:");
											scanf("%f",&amount);
											if(amount>fifty_per)
										    continue;
										    else
										    {
										    	printf("%f amount hsa been debited from your account\n",amount);
										    	printf("total payable amount left in your account is %f\n",f[j].f2[j].rem_amount2);
										    	printf("we wish your next visit soon\n");
										    	break;
											}
										}
										
										
									}
									else
									{
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
										printf("we wish your next visit soon\n");
									}
								
								}
							}
							
							
							break;
						}
		
						
					}
					else
					{
						printf("would you like to know about crop you sold before registering(y/n)\n");
						scanf(" %c",&crop2_choice);
						if(crop2_choice=='y')
						{
							
							if(f[j].crop_choice==1)
							{
							printf("you have sold %s \n",c1.name);
							if(f[j].variety_choice==1)
							{
								f[j].rem_amount=(c1.price1*f[j].weight)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code1,c1.price1);
								printf("your have sold %f quintal of %s\n",f[j].weight,c1.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
										printf("now you have withdrawn your complete money for selling crops\n");
									
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==2)
							{
								f[j].rem_amount=(c1.price2*f[j].weight)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code2,c1.price2);
								printf("your have sold %f quintal of %s\n",f[j].weight,c1.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==3)
							{
								f[j].rem_amount=(c1.price3*f[j].weight)-amount;
								printf("of variety %d\n",c1.code3);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code3,c1.price3);
								printf("your have sold %f quintal of %s\n",f[j].weight,c1.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							
						}
						if(f[j].crop_choice==2)
						{
							printf("you have sold %s \n",c2.name);
							if(f[j].variety_choice==1)
							{
								f[j].rem_amount=(c2.price1*f[j].weight)-amount;
								printf("of variety %d\n",c2.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c2.name,c2.code1,c2.price1);
								printf("your have sold %f quintal of %s\n",f[j].weight,c2.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==2)
							{
								f[j].rem_amount=(c2.price2*f[j].weight)-amount;
								printf("of variety %d\n",c2.code2);
								printf("Price of %s of variety %d, per quintal is %f\n",c2.name,c2.code2,c2.price2);
								printf("your have sold %f quintal of %s\n",f[j].weight,c2.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==3)
							{
								f[j].rem_amount=(c2.price3*f[j].weight)-amount;
								printf("of variety %d\n",c2.code3);
								printf("Price of %s of variety %d, per quintal is %f\n",c2.name,c2.code3,c2.price3);
								printf("your have sold %f quintal of %s\n",f[j].weight,c2.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							
						}
						if(f[j].crop_choice==3)
						{
							printf("you have sold %s \n",c3.name);
							if(f[j].variety_choice==1)
							{
								f[j].rem_amount=(c3.price1*f[j].weight)-amount;
								printf("of variety %d\n",c3.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c3.name,c3.code1,c3.price1);
								printf("your have sold %f quintal of %s\n",f[j].weight,c3.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==2)
							{
								f[j].rem_amount=(c3.price2*f[j].weight)-amount;
								printf("of variety %d\n",c3.code2);
								printf("Price of %s of variety %d, per quintal is %f\n",c3.name,c3.code2,c3.price2);
								printf("your have sold %f quintal of %s\n",f[j].weight,c3.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==3)
							{
								f[j].rem_amount=(c3.price3*f[j].weight)-amount;
								printf("of variety %d\n",c3.code3);
								printf("Price of %s of variety %d, per quintal is %f\n",c3.name,c3.code3,c3.price3);
								printf("your have sold %f quintal of %s\n",f[j].weight,c3.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].rem_amount)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].rem_amount);
									}
									
									if(amount==f[j].rem_amount)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].rem_amount)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
						}
							
						}
						else
						{
							if(f[j].f2[j].crop_choice2==1)
							{
								printf("you have sold %s \n",c1.name);
								if(f[j].f2[j].variety_choice2==1)
								{
								f[j].f2[j].rem_amount2=(c1.price1*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code1,c1.price1);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
										printf("now you have withdrawn your complete money for selling crops\n");
									
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].f2[j].rem_amount2)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].f2[j].variety_choice2==2)
							{
								f[j].f2[j].rem_amount2=(c1.price2*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code2,c1.price2);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].f2[j].rem_amount2);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==3)
							{
								f[j].f2[j].rem_amount2=(c1.price3*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code3);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code3,c1.price3);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].f2[j].rem_amount2);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].f2[j].rem_amount2)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							}
							if(f[j].f2[j].crop_choice2==2)
							{
								printf("you have sold %s \n",c1.name);
								if(f[j].f2[j].variety_choice2==1)
								{
								f[j].f2[j].rem_amount2=(c1.price1*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code1,c1.price1);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
										printf("now you have withdrawn your complete money for selling crops\n");
									
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].f2[j].rem_amount2)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].f2[j].variety_choice2==2)
							{
								f[j].f2[j].rem_amount2=(c1.price2*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code2,c1.price2);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].f2[j].rem_amount2);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==3)
							{
								f[j].f2[j].rem_amount2=(c1.price3*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code3);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code3,c1.price3);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].f2[j].rem_amount2);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].f2[j].rem_amount2)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							}
							if(f[j].f2[j].crop_choice2==3)
							{
								printf("you have sold %s \n",c1.name);
								if(f[j].f2[j].variety_choice2==1)
								{
								f[j].f2[j].rem_amount2=(c1.price1*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code1,c1.price1);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].rem_amount);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
										printf("now you have withdrawn your complete money for selling crops\n");
									
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].f2[j].rem_amount2)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].f2[j].variety_choice2==2)
							{
								f[j].f2[j].rem_amount2=(c1.price2*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code1);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code2,c1.price2);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].f2[j].rem_amount2);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].rem_amount)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							if(f[j].variety_choice==3)
							{
								f[j].f2[j].rem_amount2=(c1.price3*f[j].f2[j].weight2)-amount;
								printf("of variety %d\n",c1.code3);
								printf("Price of %s of variety %d, per quintal is %f\n",c1.name,c1.code3,c1.price3);
								printf("your have sold %f quintal of %s\n",f[j].f2[j].weight2,c1.name);
								printf("your total payable amount is %f\n",f[j].f2[j].rem_amount2);
								printf("would you like to withdraw money(y/n):");
								scanf(" %c",&reg_pay_choice);
								if(reg_pay_choice=='y')
								{
									printf("enter the amount, you would like to withdraw:");
									scanf("%f",&amount);
									if(amount<f[j].f2[j].rem_amount2)
									{
										printf("%f Rs has been debited from your account\n",amount);
										printf("your remaining balance is %f\n",f[j].f2[j].rem_amount2);
									}
									
									if(amount==f[j].f2[j].rem_amount2)
									printf("now you have withdrawn your complete money for selling crops\n");
									if(amount>f[j].f2[j].rem_amount2)
									{
										while(amount>f[j].f2[j].rem_amount2)
										{
											printf("enter valid amount\n");
											scanf("%f",&amount);
										}
									}
								}
							}
							}
						}
					}
					
					
					break;
				}
				
			}
			if(j==i+1)
			{
				puts("you entered incorrect aadhar number\n");
				puts("please try again\n");
			}
		}
		else
		{
			while(i<100)
			{
				puts("Please weigh your crop and then visit again\n");
				printf("Welcome again\n");
				printf("enter your name and aadhar number:");
				getchar();
				gets(f[i].name);
				scanf("%lu",&f[i].aadhar);
				while(edit_crop!='n')
				{
					printf("Which crop did you sold ?\n");
					printf("enter 1 for %s, 2 for %s, 3 for %s\n",c1.name,c2.name,c3.name);
					scanf("%d",&f[i].crop_choice);
					printf("Do you want to edit your choice (y/n)");
					scanf(" %c",&edit_crop);	
				}
				if(f[i].crop_choice==1)
				{
					printf("you have chosen for crop %s\n",c1.name);
					while(edit_variety!='n')
					{
						printf("tell us about the variety of your crop\n");
						printf("enter 1 for variety %d, 2 for variety %d, 3 for variety %d:\n",c1.code1,c1.code2,c1.code3);
						scanf("%d",&f[i].variety_choice);
						printf("Do you want to edit your choice(y/n)\n");
						scanf(" %c",&edit_variety);
					}
					if(f[i].variety_choice==1)
					{
						
						printf("you have chosen for variety %d\n",c1.code1);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c1.price1*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c1.price1);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					if(f[i].variety_choice==2)
					{
						
						printf("you have chosen for variety %d\n",c1.code2);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c1.price2*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c1.price2);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					if(f[i].variety_choice==3)
					{
						
						printf("you have chosen for variety %d\n",c1.code3);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c1.price3*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c1.price3);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					
				}
				if(f[i].crop_choice==2)
				{
					printf("you have chosen for crop %s\n",c2.name);
					while(edit_variety!='n')
					{
						printf("tell us about the variety of your crop\n");
						printf("enter 1 for variety %d, 2 for variety %d, 3 for variety %d:\n",c2.code1,c2.code2,c2.code3);
						scanf("%d",&f[i].variety_choice);
						printf("Do you want to edit your choice(y/n)\n");
						scanf(" %c",&edit_variety);
					}
					if(f[i].variety_choice==1)
					{
						
						printf("you have chosen for variety %d\n",c2.code1);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c2.price1*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c2.price1);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					if(f[i].variety_choice==2)
					{
						
						printf("you have chosen for variety %d\n",c2.code2);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(f[i].weight*c2.price2)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c2.price2);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					if(f[i].variety_choice==3)
					{
						
						printf("you have chosen for variety %d\n",c2.code3);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c2.price3*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c2.price3);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount has been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
				}
				if(f[i].crop_choice==3)
				{
				
					printf("you have chosen for crop %s\n",c3.name);
					while(edit_variety!='n')
					{
						printf("tell us about the variety of your crop\n");
						printf("enter 1 for variety %d, 2 for variety %d, 3 for variety %d:\n",c3.code1,c3.code2,c3.code3);
						scanf("%d",&f[i].variety_choice);
						printf("Do you want to edit your choice(y/n)\n");
						scanf(" %c",&edit_variety);
					}
					if(f[i].variety_choice==1)
					{
						
						printf("you have chosen for variety %d\n",c3.code1);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c3.price1*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c3.price1);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					if(f[i].variety_choice==2)
					{
						
						printf("you have chosen for variety %d\n",c3.code2);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(f[i].weight*c3.price2)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c3.price2);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[i].rem_amount);
							printf("we wish your next visit soon\n");
						}
						
					}
					if(f[i].variety_choice==3)
					{
						
						printf("you have chosen for variety %d\n",c3.code3);
						printf("enter total amount of your crop in QUNITALS:\n");
						scanf("%f",&f[i].weight);
						f[i].rem_amount=(c3.price3*f[i].weight)-amount;
						printf("cost of variety chosen by you is %f per quintal\n",c3.price3);
						printf("total payable amount is %f\n",f[i].rem_amount);
						printf("At this moment you can withdraw 50 percent of total payable amount\n");
						fifty_per=(f[i].rem_amount)/2;
						printf("Would you like to withdraw money(y/n)");
						scanf(" %c",&pay_choice);
						if(pay_choice=='y')
						{
							
							while(1)
							{
								printf("enter amount you would to withdraw:");
								scanf("%f",&amount);
								if(amount>fifty_per)
							    continue;
							    else
							    {
							    	printf("%f amount hsa been debited from your account\n",amount);
							    	printf("total payable amount left in your account is %f\n",f[i].rem_amount);
							    	printf("we wish your next visit soon\n");
							    	break;
								}
							}
							
							
						}
						else
						{
							printf("your remaining balance is %f\n",f[j].rem_amount);
							printf("we wish your next visit soon\n");
						}
					
					}
				}
				
				i++;
				break;
			}
		
		}
		
	}
	
	
}

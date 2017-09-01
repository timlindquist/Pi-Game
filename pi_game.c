#include <stdio.h>


//prototypes
void newPage();
void game(int m, int *b, int *c, int *p, int *g);
void start(int *n, int *best, int *cheat, int *prev, int *games);
int info();
int settings(int n);
void rules();
void records(int *best, int *cheat, int *prev, int *games);
void codes(int *c);
int comparison(char a[10], char b[10]);
int PI[500];

void start(int *n, int *best, int *cheat, int *prev, int *games){
	char x;
	int i;
	int b=*best;
	int m=*n;//on or off
	int c=*cheat;
	int p=*prev;
	int g=*games;
	int j;
	
	newPage();
	//visual
	printf("\ni=Info			r=Rules			s=Settings\n");
	printf(" ____   ____\n");
	printf("|    \\ |    | \n");
	printf("|  o  ) |  |\n");
	printf("|   _/  |  |\n");
	printf("|  |    |  |\n");
	printf("|  |    |  |\n");
	printf("|__|   |____|\n");
	printf("  ____   ____  ___ ___    ___\n");
	printf(" /    | /    ||   |   |  /  _]\n");
	printf("|   __||  o  || _   _ | /  [_\n");
	printf("|  |  ||     ||  \\_/  ||    _]\n");
	printf("|  |_ ||  _  ||   |   ||   [_\n");
	printf("|     ||  |  ||   |   ||     |\n");
	printf("|___,_||__|__||___|___||_____|\n");
	printf("\n");
	printf("\n");
	printf("PRESS SPACE TO START\n");

	//first key hit
	do {
			scanf("%c",&x);	
			//case check
			if (x>91){
				x=x-32;}
			if (x==' ' || x=='I' || x=='R' || x=='S'){
				i=1;}
			}
		while(i==0);
	newPage();
	//function send
	if(x=='I'){
		j=info(&b,&c);
		if(j==0){
			records(&b, &c, &p, &g);}
		if(j==1){
			codes(&c);}}
	if(x=='R'){
		rules();}
	if(x=='S'){
		*n=settings(m);}
	if(x==' '){
		game(m,&b,&c,&p,&g);}
	*prev=p;
	*best=b;
	*games=g;
	*cheat=c;
	}


int info(){
	char e;
	char x;
	int i=0;

	newPage();
	//visual
	printf("Press ESC to EXIT		r=Records			c=Codes\n");
	printf(" ____  ____   _____   ___ \n");
	printf("|    ||    \\ |     | /   \\ \n");
	printf(" |  | |  _  ||   __||     |\n");
	printf(" |  | |  |  ||  |_  |  O  |\n");
	printf(" |  | |  |  ||   _] |     |\n");
	printf(" |  | |  |  ||  |   |     |\n");
	printf("|____||__|__||__|    \\___/ \n");
	printf("\n\n\n\n\n\n\n\n\n\n");
	
	//first key hit
	do {
		scanf("%c",&x);	
		//case check
		if (x>91){
			x=x-32;}
		if (x=='R' || x=='C'){
			i=1;}
			}
		while(i==0);
	newPage();
	//send to functions
	if(x=='R'){
		return 0;}
	if(x=='C'){
		return 1;}	
	//EXIT COMMAND

	do{
		scanf("%c",&e);
		}
		while(e!=27);

	}

void rules(){
	char e;
	newPage();
	//visual
	printf("Press ESC to EXIT\n");
	printf(" ____  __ __  _        ___  _____\n");
	printf("|    \\|  |  || |      /  _]/ ___/\n");
	printf("|  D  )  |  || |     /  [_(   \\_ \n");
	printf("|    /|  |  || |___ |    _]\\__  |\n");
	printf("|    \\|  :  ||     ||   [_ /  \\ |\n");
	printf("|  .  \\     ||     ||     |\\    |\n");
	printf("|__|\\_|\\__,_||_____||_____| \\___|\n");
	printf("\n\n\n\n\n\n\n");
	printf("To play start game and input a digit then press enter. \nSee how many decimal places of pi you can reach");


	//EXIT COMMAND
	do{
		scanf("%c",&e);
		}
		while(e!=27);

	}

void records(int *best, int *cheat, int *prev, int *games){
	char e;
	int b=*best;
	int c=*cheat;
	int p=*prev;
	int g=*games;
	int i=0;
	
	//visual
	newPage;
	printf("Press ESC to EXIT\n");
	printf(" ____     ___     __   ___   ____   ___     _____\n");
	printf("|    \\   /  _]   /  ] /   \\ |    \\ |   \\   / ___/\n");
	printf("|  D  ) /  [_   /  / |     ||  D  )|    \\ (   \\_ \n");
	printf("|    / |    _] /  /  |  O  ||    / |  D  | \\__  |\n");
	printf("|    \\ |   [_ /   \\_ |     ||    \\ |     | /  \\ |\n");
	printf("|  .  \\|     |\\     ||     ||  .  \\|     | \\    |\n");
	printf("|__|\\_||_____| \\____| \\___/ |__|\\_||_____|  \\___|\n");
	printf("\n\n");
	printf("HIGH SCORE: 		%d\n",b);
	printf("PREVIOUS ATTEMPT: 	%d\n",p);
	printf("GAMES PLAYED: 		%d\n",g);
	printf("\n\n\n\n\n");
	//EXIT COMMAND
	do{
		scanf("%c",&e);
		}
		while(e!=27);
	}

void codes(int *c){
	char e;
	char a[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char temp;
	int i;
	int j;
	int x;
	int temp2=0;

	//cheat code strings
	char cheat_1[10]={'A','R','C','H','I','M','E','D','E','S'};
	char cheat_2[10]={'G','R','E','E','K','.','.','.','.','.'};
	char cheat_3[10]={'N','E','W','T','O','N','.','.','.','.'};
	char cheat_4[10]={'E','U','L','E','R','.','.','.','.','.'};
	
	//visual
		newPage();
		printf("Press ESC to EXIT				 	'*'=Reset\n");
		printf("    __  __ __    ___   ____  ______         __   ___   ___      ___  _____\n");
		printf("   /  ]|  |  |  /  _] /    ||      |       /  ] /   \\ |   \\    /  _]/ ___/\n");
		printf("  /  / |  |  | /  [_ |  o  ||      |      /  / |     ||    \\  /  [_(   \\_ \n");
		printf(" /  /  |  _  ||    _]|     ||_|  |_|     /  /  |  O  ||  D  ||    _]\\__  |\n");
		printf("/   \\_ |  |  ||   [_ |  _  |  |  |      /   \\_ |     ||     ||   [_ /  \\ |\n");
		printf("\\     ||  |  ||     ||  |  |  |  |      \\     ||     ||     ||     |\\    |\n");
		printf(" \\____||__|__||_____||__|__|  |__|       \\____| \\___/ |_____||_____| \\___|\n");
		printf("\n\n\n");
		printf("			    ENTER PASSCODE\n");
		printf("			______________________\n");
		printf("			|");
		for(j=0;j<10;++j){
			printf("%c ",a[j]);}
		printf("|\n");
		printf("			----------------------\n");
		printf("\n\n\n");
	
	for(i=0;i<10;i++){
		scanf(" %c",&temp);
		if(temp==27){
			temp2=1;
			break;}
		//reset codes
		if(temp=='*'){
			newPage();
			printf("Press ESC to EXIT\n");
			printf("    __  __ __    ___   ____  ______         __   ___   ___      ___  _____\n");
			printf("   /  ]|  |  |  /  _] /    ||      |       /  ] /   \\ |   \\    /  _]/ ___/\n");
			printf("  /  / |  |  | /  [_ |  o  ||      |      /  / |     ||    \\  /  [_(   \\_ \n");
			printf(" /  /  |  _  ||    _]|     ||_|  |_|     /  /  |  O  ||  D  ||    _]\\__  |\n");
			printf("/   \\_ |  |  ||   [_ |  _  |  |  |      /   \\_ |     ||     ||   [_ /  \\ |\n");
			printf("\\     ||  |  ||     ||  |  |  |  |      \\     ||     ||     ||     |\\    |\n");
			printf(" \\____||__|__||_____||__|__|  |__|       \\____| \\___/ |_____||_____| \\___|\n");
			printf("\n\n\n");
			printf("			    CODES RESET\n\n\n\n\n\n\n");
			temp2=1;
			*c=0;
			break;}
		//case check		
		if(temp>91){
			temp=temp-32;}
		a[i]=temp;
		newPage();
		printf("Press ESC to EXIT				 	'*'=Reset\n");
		printf("    __  __ __    ___   ____  ______         __   ___   ___      ___  _____\n");
		printf("   /  ]|  |  |  /  _] /    ||      |       /  ] /   \\ |   \\    /  _]/ ___/\n");
		printf("  /  / |  |  | /  [_ |  o  ||      |      /  / |     ||    \\  /  [_(   \\_ \n");
		printf(" /  /  |  _  ||    _]|     ||_|  |_|     /  /  |  O  ||  D  ||    _]\\__  |\n");
		printf("/   \\_ |  |  ||   [_ |  _  |  |  |      /   \\_ |     ||     ||   [_ /  \\ |\n");
		printf("\\     ||  |  ||     ||  |  |  |  |      \\     ||     ||     ||     |\\    |\n");
		printf(" \\____||__|__||_____||__|__|  |__|       \\____| \\___/ |_____||_____| \\___|\n");
		printf("\n\n\n");
		printf("			    ENTER PASSCODE\n");
		printf("			______________________\n");
		printf("			|");
		for(j=0;j<10;++j){
			printf("%c ",a[j]);}
		printf("|\n");
		printf("			----------------------\n");
		printf("\n\n\n");
		}
	//compair strings
	x=comparison(a,cheat_3);
	//printf("%d",x);
	if((temp2!=1)&&(comparison(a,cheat_1)==0)&&(comparison(a,cheat_2)==0)&&(comparison(a,cheat_3)==0)&&(comparison(a,cheat_4)==0)){
			newPage();
			printf("Press ESC to EXIT\n");
			printf("    __  __ __    ___   ____  ______         __   ___   ___      ___  _____\n");
			printf("   /  ]|  |  |  /  _] /    ||      |       /  ] /   \\ |   \\    /  _]/ ___/\n");
			printf("  /  / |  |  | /  [_ |  o  ||      |      /  / |     ||    \\  /  [_(   \\_ \n");
			printf(" /  /  |  _  ||    _]|     ||_|  |_|     /  /  |  O  ||  D  ||    _]\\__  |\n");
			printf("/   \\_ |  |  ||   [_ |  _  |  |  |      /   \\_ |     ||     ||   [_ /  \\ |\n");
			printf("\\     ||  |  ||     ||  |  |  |  |      \\     ||     ||     ||     |\\    |\n");
			printf(" \\____||__|__||_____||__|__|  |__|       \\____| \\___/ |_____||_____| \\___|\n");
			printf("\n\n\n");
			printf("			    CODE UNSUCCESSFUL\n\n\n\n\n\n\n");}
	if(comparison(a,cheat_1)==1||comparison(a,cheat_2)==1||comparison(a,cheat_3)==1||comparison(a,cheat_4)==1){
			newPage();
			printf("Press ESC to EXIT\n");
			printf("    __  __ __    ___   ____  ______         __   ___   ___      ___  _____\n");
			printf("   /  ]|  |  |  /  _] /    ||      |       /  ] /   \\ |   \\    /  _]/ ___/\n");
			printf("  /  / |  |  | /  [_ |  o  ||      |      /  / |     ||    \\  /  [_(   \\_ \n");
			printf(" /  /  |  _  ||    _]|     ||_|  |_|     /  /  |  O  ||  D  ||    _]\\__  |\n");
			printf("/   \\_ |  |  ||   [_ |  _  |  |  |      /   \\_ |     ||     ||   [_ /  \\ |\n");
			printf("\\     ||  |  ||     ||  |  |  |  |      \\     ||     ||     ||     |\\    |\n");
			printf(" \\____||__|__||_____||__|__|  |__|       \\____| \\___/ |_____||_____| \\___|\n");
			printf("\n\n\n");
			printf("			    CODE SUCCESSFULLY ADDED\n\n\n\n\n\n\n");}
	//apply cheat
	if(comparison(a,cheat_1)==1){
		*c=100;}
	if(comparison(a,cheat_2)==1){
		*c=5;}
	if(comparison(a,cheat_3)==1){
		*c=50;}
	if(comparison(a,cheat_4)==1){
		*c=10;}
	//EXIT COMMAND
	do{
		scanf("%c",&e);
		}
		while(e!=27);
	}

int settings(int m){
	char o;
	char e;

	//visual
	printf("Press ESC to EXIT\n");
	printf("\n");
	printf("  _____   ___ ______  ______  ____  ____    ____  _____\n");
	printf(" / ___/  /  _]      ||      ||    ||    \\  /    |/ ___/\n");
	printf("(   \\_  /  [_|      ||      | |  | |  _  ||   __(   \\_\n");
	printf(" \\__  ||    _]_|  |_||_|  |_| |  | |  |  ||  |  |\\__  |\n");
	printf(" /  \\ ||   [_  |  |    |  |   |  | |  |  ||  |_ |/  \\ |\n");
	printf(" \\    ||     | |  |    |  |   |  | |  |  ||     |\\    |\n");
	printf("  \\___||_____| |__|    |__|  |____||__|__||___,_| \\___|\n");
	printf("\n");
	printf("BRIGHTNESS 		| 		82%%\n");
	printf("SOUND			|		58%%\n");
	printf("RESOLUTION		|		VGA [640 x 480]\n");
	if(m==1){
		printf("Notifications		|		ON\n");
		printf("\n");
		printf("\n");
		printf("\n\n");
		printf("Turn notifications OFF? Y/N: ");}
	else{
		printf("Notifications		|		OFF\n");
		printf("\n");
		printf("\n");
		printf("\n\n");
		printf("Turn notifications ON? Y/N: ");}
	
	scanf(" %c", &o);
	newPage();
	printf("Press ESC to EXIT\n");
	printf("\n");
	printf("  _____   ___ ______  ______  ____  ____    ____  _____\n");
	printf(" / ___/  /  _]      ||      ||    ||    \\  /    |/ ___/\n");
	printf("(   \\_  /  [_|      ||      | |  | |  _  ||   __(   \\_\n");
	printf(" \\__  ||    _]_|  |_||_|  |_| |  | |  |  ||  |  |\\__  |\n");
	printf(" /  \\ ||   [_  |  |    |  |   |  | |  |  ||  |_ |/  \\ |\n");
	printf(" \\    ||     | |  |    |  |   |  | |  |  ||     |\\    |\n");
	printf("  \\___||_____| |__|    |__|  |____||__|__||___,_| \\___|\n");
	printf("\n");
	printf("BRIGHTNESS 		| 		82%%\n");
	printf("SOUND			|		58%%\n");
	printf("RESOLUTION		|		VGA [640 x 480]\n");
	if((o=='y'|| o=='Y')&& m==1){
		printf("Notifications		|		OFF\n");}
	if ((o=='y'||o=='Y')&& m!=1){
		printf("Notifications		|		ON\n");}			
	if (o!='Y' && o!='y' && m==1){
		printf("Notifications		|		ON\n");}
	if (o!='Y'&& o!='y' && m!=1){
		printf("Notifications		|		OFF\n");}
	printf("\n\n");
	printf("\n");
	printf("\n");
	//exit command
	do{
		scanf("%c",&e);
		}
		while(e!=27);
	
	if((o=='y'||o=='Y') && m!=1){
	return 1;}
	if((o!='y'&& o!='Y')&& m==1){
	return 1;}
	if (o!='Y'&& o!='y' && m!=1){
	return 0;}
	if((o=='y'|| o=='Y')&& m==1){
	return 0;}
	}

void game(int m, int *b, int *c, int *p, int *g){
	int i=*c;
	int j;
	//int temp[10]={1,4,1,5,9,2,6,5,3};
	int num;
	char e;
	int tempB=*b;
	do {
		newPage();		
		i++;
		printf("Press ESC to EXIT\n");
		printf("  ____   ___   __\n");
		printf(" /    | /   \\ |  |\n");
		printf("|   __||     ||  |\n");
		printf("|  |  ||  O  ||__|				CURRENT: 	%d\n", i-1);
		printf("|  |_ ||     | __ \n");		
			if(m==1){
				if(i<*b+1){
					printf("|     ||     ||  |				BEST: 		%d\n",*b);}
				else{
					printf("|     ||     ||  |				BEST: 		%d\n",i-1);}}
			else{
				printf("|     ||     ||  |\n");}
		printf("|___,_| \\___/ |__|\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");

		printf("3.");

		for (j=1;j<i;j++){
			printf("%d",PI[j-1]);
			}
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");	
		printf("\n");
		printf("\nNEXT DIGIT: ");
		scanf(" %d",&num);
		}
	while(num==PI[i-1]);
		//after answer is wrong	
		*g=*g+1;
		newPage();		
		i++;
		*p=i-2;
		printf("Press ESC to EXIT\n");
	
		printf("  ____   ____  ___ ___    ___       ___   __ __    ___  ____ \n");
		printf(" /    | /    ||   |   |  /  _]     /   \\ |  |  |  /  _]|    \\\n");
		printf("|   __||  o  || _   _ | /  [_     |     ||  |  | /  [_ |  D  )\n");
		printf("|  |  ||     ||  \\_/  ||    _]    |  O  ||  |  ||    _]|    /    CURRENT:    %d\n", i-2);
		printf("|  |_ ||  _  ||   |   ||   [_     |     ||  :  ||   [_ |    \\\n");
			if(m==1){
				if(i<*b){
					printf("|     ||  |  ||   |   ||     |    |     | \\   / |     ||  .  \\   BEST: 	     %d\n",*b);}
				else{
					printf("|     ||  |  ||   |   ||     |    |     | \\   / |     ||  .  \\   BEST: 	     %d\n",i-2);}}
			else{
				printf("|     ||  |  ||   |   ||     |    |     | \\   / |     ||  .  \\\n");}
		//printf("|     ||  |  ||   |   ||     |    |     | \\   / |     ||  .  \\\n");
		printf("|___,_||__|__||___|___||_____|     \\___/   \\_/  |_____||__|\\_|\n");
		printf("\n\n\n\n");
		printf("3.");

		for (j=1;j<i;j++){
			printf("%d",PI[j-1]);
			}
		printf(" <--");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");		
	
		
	printf("%d is WRONG it's: %d",num, PI[i-2]);
	

	printf("\nYou reached %d places",i-2);
	do{
		scanf("%c",&e);
		}
		while(e!=27);
	if(tempB<i-2){
		*b=i-2;}

	}

void newPage(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}

int comparison(char a[10], char b[10]){
	int i;	
	int j=0;
	for(i=0;i<10;++i){	
		if(a[i]==b[i]){
			j=j+1;}
		}	
	
	if(j==10){
		return 1;}
	else{
	return 0;}
	}

int main (){
	int n;
	int best=0;
	int cheat=0;
	int prev=0;
	int games=0;
	newPage();
	for(;;){
		start(&n,&best,&cheat,&prev,&games);
		}
	return 0;
	}



int PI[500]={1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1,6,9,3,9,9,3,7,5,1,0,
5,8,2,0,9,7,4,9,4,4,5,9,2,3,0,7,8,1,6,4,0,6,2,8,6,2,0,8,9,9,8,6,2,8,0,3,4,8,2,5,3,4,2,1,1,7,0,6,7,9,
8,2,1,4,8,0,8,6,5,1,3,2,8,2,3,0,6,6,4,7,0,9,3,8,4,4,6,0,9,5,5,0,5,8,2,2,3,1,7,2,5,3,5,9,4,0,8,1,2,8,
4,8,1,1,1,7,4,5,0,2,8,4,1,0,2,7,0,1,9,3,8,5,2,1,1,0,5,5,5,9,6,4,4,6,2,2,9,4,8,9,5,4,9,3,0,3,8,1,9,6,
4,4,2,8,8,1,0,9,7,5,6,6,5,9,3,3,4,4,6,1,2,8,4,7,5,6,4,8,2,3,3,7,8,6,7,8,3,1,6,5,2,7,1,2,0,1,9,0,9,1,
4,5,6,4,8,5,6,6,9,2,3,4,6,0,3,4,8,6,1,0,4,5,4,3,2,6,6,4,8,2,1,3,3,9,3,6,0,7,2,6,0,2,4,9,1,4,1,2,7,3,
7,2,4,5,8,7,0,0,6,6,0,6,3,1,5,5,8,8,1,7,4,8,8,1,5,2,0,9,2,0,9,6,2,8,2,9,2,5,4,0,9,1,7,1,5,3,6,4,3,6,
7,8,9,2,5,9,0,3,6,0,0,1,1,3,3,0,5,3,0,5,4,8,8,2,0,4,6,6,5,2,1,3,8,4,1,4,6,9,5,1,9,4,1,5,1,1,6,0,9,4,
3,3,0,5,7,2,7,0,3,6,5,7,5,9,5,9,1,9,5,3,0,9,2,1,8,6,1,1,7,3,8,1,9,3,2,6,1,1,7,9,3,1,0,5,1,1,8,5,4,8,
0,7,4,4,6,2,3,7,9,9,6,2,7,4,9,5,6,7,3,5,1,8,8,5,7,5,2,7,2,4,8,9,1,2,2,7,9,3,8,1,8,3,0,1,1,9,4,9,1,2};

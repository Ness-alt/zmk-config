

#define HOME  0
#define NUM   1
#define SYM   2
#define NAV   3
#define FUN   4



/ {
        keymap {
                compatible = "zmk,keymap";

              HOME {


// -----------------------------------------------------------------------------------------
// |  Q   |  W  |  E  |  R  |  T   |||  Y  |  U   |  I  |  O  |  P    |
// |A-NAV |  S  |  D  |  F  |  G   |||  H  |  J   |  K  |  L  |  ;    |
// |Z-SHFT|  X  |  C  |  V  |  B   |||  N  |  M   |  ,  |  .  | / SHFT|
//          |ESC/CMD|TAB/CTL|SPC/1 |||SPC/2|ENT/SYM|BKSP/ALT|

     bindings = <
   &kp Q        &kp W 	&kp E 	&kp R 	&kp T 		 &kp Y 	&kp U  	&kp I     	&kp O   	&kp P
   &lt NAV A    &kp S 	&kp D 	&kp F 	&kp G  		 &kp H 	&kp J  	&kp K     	&kp L   	&kp SEMI
   &mt LSHIFT Z &kp X 	&kp C 	&kp V 	&kp B 		 &kp N 	&kp M  	&kp COMMA 	&kp DOT 	&mt RSHIFT FSLH
     &mt LCTRL ESC   &mt LGUI TAB   &lt SYM SPACE    &lt NUM SPACE   &mt RGUI RET   &mt RALT BSPC
    >; 
};




NUM {
	
// -----------------------------------------------------------------------------------------
// |  !  |  @  |  #  |  $  |  %  |||  ^  |  &  |  *  |  (  |  )  | 
// |  1  |  2  |  3  |  4  |  5  |||  6  |  7  |  8  |  9  |  0  |
// |     |     |     |     |     |||  -  |  =  |  [  |  ]  |  \  |
//             |     |     |     ||| ENT | ENT | ALT |
bindings = <
 	&kp EXCL	&kp AT	&kp HASH	&kp DLLR  	&kp PRCNT   &kp CARET 	&kp AMPS  	&kp KP_MULTIPLY &kp LPAR 	&kp RPAR
	&kp N1  	&kp N2 	&kp N3 		&kp N4		&kp N5 		&kp N6 		&kp N7  	&kp N8 			&kp N9 		&kp N0
   	&trans    	&trans	&trans 		&trans		&trans      &kp MINUS 	&kp EQUAL 	&kp LBKT        &kp RBKT 	&kp PIPE
   						&trans   	&trans 		&mo FUN   	&trans  	&kp RET  	&kp RALT
	>;
};

SYM	{
// -----------------------------------------------------------------------------------------
// |  !  |  @  |  #  |  $  |  %  |||  ^  |  &  |  *  |  (  |  )  |
// | F1  | F2  | F3  | F4  | F5  |||  -  |  =  |  [  |  ]  | "|" |
// | F6  | F7  | F8  | F9  | F10 |||  _  |  +  |  {  |  }  |  \  |
//             | F11 | F12 |     |||TRANS| FUN |     |
bindings = <
   &kp EXCL &kp AT	&kp HASH  	&kp DLLR  	&kp PRCNT   &kp CARET 	&kp AMPS  	&kp KP_MULTIPLY &kp LPAR 	&kp RPAR
   &kp F10	&kp F2	&kp F3 		&kp F4		&kp F5      &kp MINUS 	&kp EQUAL 	&kp LBKT        &kp RBKT 	&kp PIPE
   &kp F6	&kp F7	&kp F8		&kp F9		&kp F10		&KP UNDER	&kp PLUS	&kp LBRC		&KP RBRC	&kp BSLH
   					&kp F11		&kp F12 	&trans		&mo FUN		&trans		&trans	
	>;
};

NAV {
// -----------------------------------------------------------------------------------------
// |     |     | UP  |      |     ||| TAB | HOME |      | END | DEL  |
// |TRANS|LEFT | DOWN| RGT  |     ||| LEFT| DOWN |  UP  | RGT | BKSP |
// |     |     |     |      |     |||     |      |      |     |      |
//             |     |      |     |||     |      |      |
bindings = <

   &trans &trans 	&kp UP 		&trans 		&trans    &kp TAB  &kp HOME 	&trans 	&kp END   	&kp DEL
   &trans &kp LEFT 	&kp DOWN 	&kp RIGHT 	&trans    &kp LEFT 	&kp DOWN 	&kp UP 	&kp RIGHT 	&trans
   &trans &trans 	&trans 		&trans 		&trans    &trans 	&trans 		&trans 	&trans 		&trans
                 	&trans 		&trans 		&trans	 &trans 	&trans 		&trans

	>;
};

FUN {
// -----------------------------------------------------------------------------------------
// | RST | BOOT | BT1 |  BT1 |     |||     |      |      |     |      |
// |BTCLR|      |     |      |     |||     |      |      |     |      |
// |     |      |     |      |     |||     |      |      |     |      |
//              |     |      |     |||     |      |      |
bindings = <
   &reset 		&bootloader &bt BT_SEL 0 	&bt BT_SEL 1 	&trans    &trans &trans &trans &trans &trans
   &bt BT_CLR 	&trans 		&trans 			&trans 			&trans    &trans &trans &trans &trans &trans
   &trans 		&trans 		&trans 			&trans 			&trans    &trans &trans &trans &trans &trans
                 			&trans 			&trans 			&trans    &trans &trans &trans
	>;
};


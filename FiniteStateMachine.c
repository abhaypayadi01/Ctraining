#include<stdio.h>
typedef enum
{
    Stop,
    Go
} State_Type;

typedef struct
{
    char* brake[2];
    char* gas[2];
    int time;
    State_Type engine_state[2];
    char* current_state_indication[2];
}State;

State state_machine[2]={
    {{"RELEASED","RELEASED"},{"RELEASED,PRESSED"},1,{Stop,Go},{"STOP","GO"}},
    {{"PRESSED","RELEASED"},{"RELEASED","PRESSED"},1,{Stop,Go},{"STOP","GO"}}
};

State_Type current_state;
static int control_input;

int main()
{
    current_state=Stop;
    while(1)
    {
        printf("enter");
        fflush(stdout);
        scanf("%d",&control_input);
        printf("\n Current state:%s\n",state_machine[current_state].current_state_indication[control_input]);
        printf("\n Break:%s\n",state_machine[current_state].brake[control_input]);
        printf("\n Gas:%s\n",state_machine[current_state].gas[control_input]);
        printf("\n Delay:%d\n",state_machine[current_state].time);
        current_state=state_machine[current_state].engine_state[control_input];
    }
}

#include <stdio.h>

int main() {
    int option;
    int callType;
    int callDuration;
    int contactNumber;
    int exit = 0;
    
    printf("Welcome to the Telecom Call Service!\n");
    
    while (!exit) {
        printf("\nPlease select an option:\n");
        printf("1. Make a call\n");
        printf("2. Receive a call\n");
        printf("3. End call\n");
        printf("4. Send a message\n");
        printf("5. View call history\n");
        printf("6. Exit\n");
        printf("Option: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                printf("\nSelect the type of call:\n");
                printf("1. Voice call\n");
                printf("2. Video call\n");
                printf("3. Conference call\n");
                printf("Call type: ");
                scanf("%d", &callType);
                
                switch (callType) {
                    case 1:
                        printf("\nEnter the contact number: ");
                        scanf("%d", &contactNumber);
                        printf("\nEnter the call duration (in minutes): ");
                        scanf("%d", &callDuration);
                        printf("\nMaking a voice call to %d for %d minutes...\n", contactNumber, callDuration);
                        // Perform voice call operations
                        break;
                        
                    case 2:
                        printf("\nEnter the contact number: ");
                        scanf("%d", &contactNumber);
                        printf("\nEnter the call duration (in minutes): ");
                        scanf("%d", &callDuration);
                        printf("\nMaking a video call to %d for %d minutes...\n", contactNumber, callDuration);
                        // Perform video call operations
                        break;
                        
                    case 3:
                        printf("\nEnter the contact number: ");
                        scanf("%d", &contactNumber);
                        printf("\nEnter the call duration (in minutes): ");
                        scanf("%d", &callDuration);
                        printf("\nMaking a conference call to %d for %d minutes...\n", contactNumber, callDuration);
                        // Perform conference call operations
                        break;
                        
                    default:
                        printf("\nInvalid call type selected.\n");
                        break;
                }
                
                break;
                
            case 2:
                printf("\nReceiving a call...\n");
                // Perform receive call operations
                break;
                
            case 3:
                printf("\nEnding the call...\n");
                // Perform end call operations
                break;
                
            case 4:
                printf("\nEnter the contact number: ");
                scanf("%d", &contactNumber);
                printf("\nEnter the message: ");
                char message[100];
                getchar();  // Clearing the input buffer
                fgets(message, sizeof(message), stdin);
                printf("\nSending a message to %d: %s", contactNumber, message);
                // Perform send message operations
                break;
                
            case 5:
                printf("\nViewing call history...\n");
                // Perform view call history operations
                break;
                
            case 6:
                printf("\nExiting the Telecom Call Service...\n");
                exit = 1;
                break;
                
            default:
                printf("\nInvalid option selected.\n");
                break;
        }
    }
    
    return 0;
}


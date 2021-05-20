int adult(int age, int a) {
    int temp, oxy, resp, hr, i, j, n, b, c, d, e, sum, low, med, high, flag;
    char audio, g, repeat;
    
    do
    {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        flag = 0;
        printf("Enter your gender: ");
        scanf("%c", g);
        if (g == "male") {
            printf("Enter your oxygen level: ");
            scanf("%d", oxy);
            if (oxy < 75 || oxy > 100) {
                b = b + 1;
            }
            printf("Enter your air intake rate: ");
            scanf("%d", resp);
            if (resp < 14 || resp > 18) {
                c = c + 1;
            }
            printf("Enter your heart rate: ");
            scanf("%d", hr);
            if (hr < 70 || hr > 75) {
                d = d + 1;
            }
            do {
                printf("Enter yes for severe cough, no for light/no cough: ");
                scanf("%d", audio);
                if (audio == "yes") {
                    e = e + 1;
                } else if (audio != "yes" && audio != "no") {
                        printf("ERROR! re-enter ");
                    }
                }
            } while (audio != "yes" && audio != "no");
        }
        else if (g == "female")
        {
                printf("Enter your oxygen level: ");
                scanf("%d", oxy);
                if (oxy < 75 || oxy > 100) {
                    b = b + 1;
                }
                printf("Enter your air intake rate: ");
                scanf("%d", resp);
                if (resp < 16 || resp > 20) {
                    c = c + 1;
                }
                printf("Enter your heart rate: ");
                scanf("%d", hr);
                if (hr < 78 || hr > 82) {
                    d = d + 1;
                }
                do {
                    printf("Enter yes for severe cough, no for light/no cough: ");
                    scanf("%d", audio);
                    if (audio == "yes") {
                        e = e + 1;
                    }
                    else if (audio != "yes" && audio != "no") {
                            printf("ERROR! re-enter ");
                        }
                    }
                } while (audio != "yes" && audio != "no");
            }
            else 
            {
                printf("ERROR! re-enter ");
            }
        }
    } while (g != "female" && g != "male");
    
    // summing up the total number of abnormalties!(to find the probability of covid)
    // sum is the no.of abnormalities
    flag = a + b + c + d + e;
    
    return flag;
}
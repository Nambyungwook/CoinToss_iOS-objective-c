//
//  ViewController.h
//  CoinToss
//
//  Created by 박미경 on 18/04/2019.
//  Copyright © 2019 Nambyungwook. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    UILabel *status;
    UILabel *result;
}

@property (nonatomic, retain) IBOutlet UILabel *status;
@property (nonatomic, retain) IBOutlet UILabel *result;

-(IBAction)callHeads;
-(IBAction)callTails;

@end

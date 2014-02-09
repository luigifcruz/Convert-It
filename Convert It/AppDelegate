//
//  AppDelegate.m
//  Convert It
//
//  Created by Luigi Freitas on 2/7/14.
//  Copyright (c) 2014 Luigi Freitas. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate


- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    
    
}

@synthesize temp =_temp;
@synthesize input = _input;


@synthesize temp2 =_temp2;
@synthesize input2 = _input2;

- (IBAction)submit:(id)sender {

    double temp1 = self.input.doubleValue;
    double t1 = (160 + (9 * temp1))/5;
    [self.temp setStringValue:[NSString stringWithFormat:@"%.1f ˚F",t1 ]];

}


- (IBAction)submit2:(id)sender {
    
    double temp2 = self.input2.doubleValue;
    double t2 = (temp2-32)*5/9;
    [self.temp2 setStringValue:[NSString stringWithFormat:@"%.1f ˚C",t2 ]];
}

- (IBAction)link:(id)sender {
[[NSWorkspace sharedWorkspace] openURL:[NSURL URLWithString:@"http://luigifreitas.me/0.2"]];
}

@end

//
//  BEDataViewController.m
//  bible-everyday
//
//  Created by song thinking on 14-7-23.
//  Copyright (c) 2014年 song thinking. All rights reserved.
//

#import "BEDataViewController.h"

@interface BEDataViewController ()

@end

@implementation BEDataViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.dataLabel.text = [self.dataObject description];
}

@end

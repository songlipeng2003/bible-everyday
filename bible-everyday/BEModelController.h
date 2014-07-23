//
//  BEModelController.h
//  bible-everyday
//
//  Created by song thinking on 14-7-23.
//  Copyright (c) 2014年 song thinking. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BEDataViewController;

@interface BEModelController : NSObject <UIPageViewControllerDataSource>

- (BEDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(BEDataViewController *)viewController;

@end

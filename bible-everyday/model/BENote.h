//
//  BENote.h
//  bible-everyday
//
//  Created by song thinking on 14-7-24.
//  Copyright (c) 2014年 song thinking. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BENote : NSObject
@property (nonatomic, copy) NSNumber *id;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *conent;
@property (nonatomic, copy) NSDate *created_at;
@property (nonatomic, copy) NSDate *updated_at;
@end

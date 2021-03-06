//
//  Parameter.h
//  Hello
//
//  Created by Derek Chou on 2015/11/16.
//  Copyright © 2015年 Derek Chou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Parameter : NSManagedObject

+ (NSArray *)getByType:(NSString*)type;

@end

NS_ASSUME_NONNULL_END

#import "Parameter+CoreDataProperties.h"

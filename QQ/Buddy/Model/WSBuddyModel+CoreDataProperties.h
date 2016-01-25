//
//  WSBuddyModel+CoreDataProperties.h
//  QQ
//
//  Created by weida on 16/1/25.
//  Copyright © 2016年 weida. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//  https://github.com/weida-studio/QQ

#import "WSBuddyModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WSBuddyModel (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *nickName;
@property (nullable, nonatomic, retain) NSString *headImageURL;
@property (nullable, nonatomic, retain) NSNumber *onLineState;
@property (nullable, nonatomic, retain) NSString *lastSignature;
@property (nullable, nonatomic, retain) NSString *groupName;

@end

NS_ASSUME_NONNULL_END

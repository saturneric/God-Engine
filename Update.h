//
//  Update.h
//  GodEngine
//
//  Created by Saturneric on 17/1/29.
//  Copyright © 2017年 Bakantu Eric. All rights reserved.
//

#import "Engine.h"
#import "Object.h"

@interface GEUpdate : NSObject

@property(nonatomic)NSArray *relatedObjectID;
@property(nonatomic)NSArray *changeAction;

@end

@interface GEAction : NSObject

@property(nonatomic)GEProperty *historyProperty;
@property(nonatomic)GEProperty *changedProperty;

@end



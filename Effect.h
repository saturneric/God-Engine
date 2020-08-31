//
//  Effect.h
//  GodEngine
//
//  Created by Saturneric on 17/1/25.
//  Copyright © 2017年 Bakantu Eric. All rights reserved.
//

#import "Engine.h"

@interface GEEffect : NSObject

@property(nonatomic)NSSet *requireObjectType;
@property(nonatomic)NSSet *requirePropertyName;
@property(nonatomic)id function;

- (void)setRequireObjectType:(NSSet *)requireObjectType;
- (void)addRequireObjectType:(NSSet *)typeName;
- (void)setRequireObject:(NSSet *)objects;
- (void)setFunction:(id)function;
- (void)startMeasure;

@end


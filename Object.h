//
//  Object.h
//  GodEngine
//
//  Created by Saturneric on 17/1/25.
//  Copyright © 2017年 Bakantu Eric. All rights reserved.
//

#import "Engine.h"

#define VECTOR 0
#define SCARLAR 1

@interface GEUniverse : NSObject

@property(nonatomic)NSSet *specialPropertyList;
@property(nonatomic)NSString *universeID;
@property(nonatomic)NSArray *objects;


@end

@interface GEObjectGroup : NSObject

@property(nonatomic)NSSet *defaultPropertyList;

@end

@interface GEProperty : NSObject

@property(nonatomic) NSString *name;
@property(nonatomic) NSInteger type;
@property(nonatomic) id variable;

- (void)setPropertyName:(NSString *)name;
- (void)setPropertyVariable:(NSInteger)type variable:(id) variable;
@end

@interface GEVector : NSObject

@property(assign,nonatomic) NSInteger demention;
@property(nonatomic) NSArray *describtion;

- (void)setDemention:(NSInteger)dementionNumber;
- (void)setVectorValue:(NSInteger)demention value:(NSSwappedDouble)value;
- (void)setVectorValues:(NSArray *) describtion;
- (NSSwappedDouble *)getVectorValue:(NSInteger) demention;
- (NSArray *)getVectorValues;

@end

@interface GEScalar : NSObject

@property(nonatomic) NSSwappedDouble value;

- (void)setScalarValue:(NSSwappedDouble)value;
- (NSSwappedDouble)getScalarValue;

@end

@interface GEObject : NSObject

@property(nonatomic) NSDictionary *defaultProperty;
@property(nonatomic) NSDictionary *specialProperty;
@property(nonatomic) NSString *type;
@property(nonatomic) NSString *objectID;
@property(nonatomic) NSString *groupID;
@property(nonatomic) NSString *universeID;
@property(nonatomic) GEUniverse *container;
@property(nonatomic) GEObjectGroup *group;


- (GEProperty *)getDefultPropertyWithName:(NSString *)name;
- (GEProperty *)getSpecialPropertyWithName:(NSString *)name;
- (void)setSpecialProperty:(GEProperty *)property;
- (void)setDefultProperty:(GEProperty *)property;
- (void)addSpecialProperties:(NSDictionary *) properties;
- (void)addDefaultProperties:(NSDictionary *) properties;
- (void)initWithProperties:(NSDictionary *) properties universe:(GEUniverse *)container group:(GEObjectGroup *) group;


@end

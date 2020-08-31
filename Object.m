//
//  Object.m
//  GodEngine
//
//  Created by Saturneric on 17/1/25.
//  Copyright © 2017年 Bakantu Eric. All rights reserved.
//

#import "Object.h"


@implementation GEObject

- (void)addDefultProperty:(GEProperty *)property{
    
}

- (void)initWithProperties:(NSDictionary *) properties universe:(GEUniverse *)container group:(GEObjectGroup *) group{
    self.objectID = [[NSUUID UUID] UUIDString];
    self.universeID = container.universeID;
    self.container = container;
    NSString *p_property = nil;
    self.specialProperty = [[NSDictionary alloc] init];
    for (p_property in container.specialPropertyList){
        [self.specialProperty insertValue:[properties objectForKey:p_property] inPropertyWithKey:p_property];
    }
    for (p_property in group.defaultPropertyList){
        [self.defaultProperty insertValue:[properties objectForKey:p_property] inPropertyWithKey:p_property];
    }
    
}

-(GEProperty *)getSpecialPropertyWithName:(NSString *)name{
    return [self.specialProperty objectForKey:name];
}

-(GEProperty *)getDefultPropertyWithName:(NSString *)name{
    return [self.specialProperty objectForKey:name];
}

-(void)addSpecialProperty:(GEProperty *)property{
    [self.specialProperty insertValue:<#(nonnull id)#> inPropertyWithKey:<#(nonnull NSString *)#>]
}

@end

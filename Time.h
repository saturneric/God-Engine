//
//  Time.h
//  GodEngine
//
//  Created by Saturneric on 17/1/25.
//  Copyright © 2017年 Bakantu Eric. All rights reserved.
//

#import "Engine.h"
#import "Update.h"

@interface GETime : NSObject

@property(nonatomic) NSUInteger *moment;

@end

@interface GEPhoto : NSObject

@property (nonatomic)NSMutableArray *record;
@property (nonatomic)GETime* time;
@property (nonatomic)NSMutableArray *finalRecord;

@end

@interface GETimeLine : NSObject

@property(strong,nonatomic)NSMutableArray *line;
@property(strong,nonatomic)NSString *timeLineID;
@property(nonatomic)GEPhoto *linePhoto;
@property(nonatomic)NSInteger *precision;

@end

@interface GENowMonent : NSObject

@property(nonatomic)GEPhoto *thisPhoto;
@property(nonatomic)GETime *thisTime;
@property(nonatomic)GETimeLine *thisTimeLine;

@end

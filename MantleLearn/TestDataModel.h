//
//  TestDataModel.h
//  MantleLearn
//
//  Created by Halobear on 12/4/14.
//  Copyright (c) 2014 ymonke. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface Coord :MTLModel
@property (nonatomic, strong) NSString *lon;
@property (nonatomic, strong) NSString *lat;
@end

@interface Sys :MTLModel
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *idenfier;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *country;
@property (nonatomic, strong) NSString *sunrise;
@property (nonatomic, strong) NSString *sunset;
@end

@protocol Weather
@end
@interface Weather :MTLModel // 数组
@property (nonatomic, strong) NSString *idenfier;
@property (nonatomic, strong) NSString *main;
@property (nonatomic, strong) NSString *description;
@property (nonatomic, strong) NSString *icon;
@end


@interface MainBody :MTLModel
@property (nonatomic, strong) NSString *temp;
@property (nonatomic, strong) NSString *pressure;
@property (nonatomic, strong) NSString *humidity;
@property (nonatomic, strong) NSString *temp_min;
@property (nonatomic, strong) NSString *temp_max;
@end


@interface Wind :MTLModel
@property (nonatomic, strong) NSString *speed;
@property (nonatomic, strong) NSString *deg;
@end


@interface Clouds :MTLModel
@property (nonatomic, strong) NSString *all;
@end



@interface TestDataModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, strong) Coord *coord;
@property (nonatomic, strong) Sys *sys;
@property (nonatomic, strong) MainBody *main;
@property (nonatomic, strong) Wind *wind;
@property (nonatomic, strong) Clouds *clouds;
@property (nonatomic, strong) NSArray <Weather> *weather;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSNumber *idenfier;
@property (nonatomic, strong) NSNumber *name;
@property (nonatomic, strong) NSNumber *cod;


@end







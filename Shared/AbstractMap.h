//
//  AbstractMap.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MapConstants.h"


/**
 */
@interface AbstractMap : NSObject

// -- Attributes --

/**
 */
@property (nonatomic, copy) NSData* backgroundData;
/**
 */
@property (nonatomic, assign) float backgroundScale;
/**
 */
@property (nonatomic, assign) uint64_t flags;
/**
 */
@property (nonatomic, assign) NSInteger gridHeight;
/**
 */
@property (nonatomic, copy) NSString* gridLineColor;
/**
 */
@property (nonatomic, assign) LineStyle gridLineStyle;
/**
 */
@property (nonatomic, assign) NSInteger gridLineThickness;
/**
 */
@property (nonatomic, assign) NSInteger gridLineXOffset;
/**
 */
@property (nonatomic, assign) NSInteger gridLineYOffset;
/**
 */
@property (nonatomic, assign) NSInteger gridSideLength;
/**
 */
@property (nonatomic, assign) NSInteger gridWidth;
/**
 */
@property (nonatomic, copy) NSString* name;
/**
 */
@property (nonatomic, copy) NSString* notes;
/**
 */
@property (nonatomic, assign) float scale;

// -- Relationships --

/**
 */
@property (nonatomic, copy) NSArray* locations; // [AbstractMapLocation]

@end

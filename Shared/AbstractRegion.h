//
//  AbstractRegion.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/7/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "NamedValueObject.h"


@class Condition;

/**
 * This class serves as the base class for regions in both encounters and encounter templates.
 */
@interface AbstractRegion : NamedValueObject

// -- Attributes --

/**
 * This is a hexadecimal number of 6 or 8 characters that specifies the respective RGB or RGBA
 * color value.
 */
@property (nonatomic, copy) NSString *color;
/**
 * The width of the region, expressed in map squares, along a Cartesian X axis.
 */
@property (nonatomic, assign) NSUInteger width;
/**
 * The height of the region, expressed in map squares, along a Cartesian Y axis.
 */
@property (nonatomic, assign) NSUInteger height;
/**
 * The depth of the region, expressed in map squares, along a Cartesian Z axis.
 */
@property (nonatomic, assign) NSUInteger depth;
/**
 * The location of the upper-left corner of the region, expressed in map squares (but allowing for fractional
 * placement), along a Cartesian X axis.
 */
@property (nonatomic, assign) double x;
/**
 * The location of the upper-left corner of the region, expressed in map squares (but allowing for fractional
 * placement), along an inverted Cartesian Y axis.
 */
@property (nonatomic, assign) double y;
/**
 * The location of the upper-left corner of the region, expressed in map squares (but allowing for fractional
 * placement), along a Cartesian Z axis.
 */
@property (nonatomic, assign) double z;

// -- Relationships --

@end

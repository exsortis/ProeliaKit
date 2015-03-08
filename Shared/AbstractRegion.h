//
//  AbstractRegion.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/7/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 * This class serves as the base class for regions in both encounters and encounter templates.
 */
@interface AbstractRegion : NSObject

// -- Attributes --

/**
 * This is a hexadecimal number of 6 or 8 characters that specifies the respective RGB or RGBA
 * color value.
 */
@property (nonatomic, copy) NSString *color;
/**
 * The height of the region, expressed in map squares, along a Cartesian Y axis.
 */
@property (nonatomic, assign) NSUInteger height;
/**
 * The name of the region.
 */
@property (nonatomic, copy) NSString *name;
/**
 * A string containing notes about the region.
 */
@property (nonatomic, copy) NSString *notes;
/**
 * The width of the region, expressed in map squares, along a Cartesian X axis.
 */
@property (nonatomic, assign) NSUInteger width;
/**
 * The location of the upper-left corner of the region, expressed in map squares (but allowing for fractional
 * placement), along a Cartesian X axis.
 */
@property (nonatomic, assign) double x;
/**
 * The location of the upper-left corner of the region, expressed in map squares (but allowing for fractional
 * placement), along a Cartesian Y axis.
 */
@property (nonatomic, assign) double y;

// -- Relationships --

/**
 * A collection of conditions that are associated with the region. These are generally used by the game
 * system to be applied to participants that are within the region.
 */
@property (nonatomic, copy) NSArray* conditions; // [Condition]

@end

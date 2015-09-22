//
//  AbstractMapLocation.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 * This class serves as the base class for map location in both map locations and map location templates.
 * TODO: what is this class used for?
 */
@interface AbstractMapLocation : NSObject

// -- Initializers --

// -- Attributes --

/**
 * The width of the location, in map squares.
 */
@property (nonatomic, assign) NSInteger width;

/**
 * The height of the location, in map squares.
 */
@property (nonatomic, assign) NSInteger height;

/**
 * The depth of the location, in map squares.
 */
@property (nonatomic, assign) NSInteger depth;

/**
 * The position of the location along the Cartesian X axis.
 */
@property (nonatomic, assign) float x;

/**
 *
 */
@property (nonatomic, assign) float y;

/**
 *
 */
@property (nonatomic, assign) float z;

// -- Relationships --

@end

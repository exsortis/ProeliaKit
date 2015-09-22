//
//  AbstractMapTile.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "MapConstants.h"


/**
 * This class serves as the base class for map tiles in both encounters and encounter templates.
 */
@interface AbstractMapTile : NSObject

// -- Initializers --

// -- Attributes --

/**
 * Data representing the image to be rendered in the tile's bounds.
 */
@property (nonatomic, nonnull, copy) NSData* data;

/**
 * Indicates the scale factor that should be applied to the image data before rendering. This may be
 * in addition to any scaling this applied due to zooming or other display effects by the map
 * renderer.
 */
@property (nonatomic, assign) float scale;

/**
 * The location of this tile, using Cartesian coordinates.
 */
@property (nonatomic, assign) float x;

/**
 * The location of this tile, using inverted Cartesian coordinates (positive Y goes down the axis
 * instead of up).
 */
@property (nonatomic, assign) float y;

/**
 * Indicates the display layer where this tile is rendered.
 */
@property (nonatomic, assign) MapLayer layer;

@end

//
//  AbstractMap.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;
#import "BaseValueObject.h"
#import "MapConstants.h"


@class AbstractMapLocation;

/**
 * This class serves as the base class for maps in both encounters and encounter templates.
 */
@interface AbstractMap : BaseValueObject

// -- Initializers --

// -- Attributes --

/**
 * This property holds the raw image data for the map's background.
 */
@property (nonatomic, nullable, copy) NSData* backgroundData;

/**
 * This property's value determines the scale at which the background image is drawn.
 */
@property (nonatomic, assign) float backgroundScale;

/**
 * Flags that indicate which things should be drawn on the map. Currently supports:
 */
@property (nonatomic, assign) uint64_t flags;

/**
 */
@property (nonatomic, assign) NSInteger gridWidth;

/**
 */
@property (nonatomic, assign) NSInteger gridHeight;

/**
 */
@property (nonatomic, nonnull, copy) NSString* gridLineColor;

/**
 * Determines the style of line drawn over the map.
 * @see LineStyle
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
@property (nonatomic, assign) float scale;

// -- Relationships --

@end

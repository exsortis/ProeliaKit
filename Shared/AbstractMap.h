//
//  AbstractMap.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


/**
 * The value representing the style of the maps grid lines. This value is only used if the map's flags
 * indicate that grid lines should be drawn.
 */
typedef NS_ENUM(NSInteger, LineStyle) {
    /**
* Grid line should be a solid, continguous line.
*/
    LineStyleSolid,
    /**
* Grid lines should be dashed (a long, solid segment, followed by a short gap).
*/
    LineStyleDashed,
    /**
* Grid lines should be dotted (equally short solid and gapped segments).
*/
    LineStyleDotted,
};

/**
 * This class serves as the base class for maps in both encounters and encounter templates.
 */
@interface AbstractMap : NSObject

// -- Attributes --

/**
 * This property holds the raw image data for the map's background.
 */
@property (nonatomic, copy) NSData* backgroundData;
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
@property (nonatomic, assign) NSInteger gridHeight;
/**
 */
@property (nonatomic, copy) NSString* gridLineColor;
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
@property (nonatomic, assign) NSInteger gridWidth;
/**
 * The name of the map.
 */
@property (nonatomic, copy) NSString* name;
/**
 * Notes for the map.
 */
@property (nonatomic, copy) NSString* notes;
/**
 */
@property (nonatomic, assign) float scale;

// -- Relationships --

/**
 * A collection of location objects that are part of the map.
 */
@property (nonatomic, copy) NSArray* locations; // [AbstractMapLocation]

@end

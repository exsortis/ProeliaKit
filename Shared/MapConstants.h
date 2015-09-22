//
//  MapConstants.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/21/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
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
 */
typedef NS_ENUM(NSInteger, MapLayer) {
    /**
     */
MapLayerGM,
    /**
     */
    MapLayerPlayer,
    /**
     */
    MapLayerAll,
};

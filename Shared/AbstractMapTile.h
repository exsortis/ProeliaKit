//
//  AbstractMapTile.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 3/5/15.
//  Copyright (c) 2015 Pilgrimage Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AbstractMapTile : NSObject

// -- Attributes --

@property (nonatomic, copy) NSData* data;
@property (nonatomic, assign) float scale;
@property (nonatomic, assign) NSInteger x;
@property (nonatomic, assign) NSInteger y;

@end

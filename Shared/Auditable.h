//
//  Auditable.h
//  ProeliaKit
//
//  Created by Paul Schifferer on 9/12/15.
//  Copyright © 2015 Pilgrimage Software. All rights reserved.
//

@import Foundation;


@interface Auditable : NSObject

/**
 *
 */
@property (nonatomic, assign) NSTimeInterval created;
/**
 *
 */
@property (nonatomic, assign) NSTimeInterval modified;

@end

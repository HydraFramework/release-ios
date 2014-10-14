//
//  event_mgr.h
//  EOSFramework
//
//  Created by Sam Chang on 14-9-30.
//  Copyright (c) 2014年 HP. All rights reserved.
//

#ifndef __EOSFramework__event_mgr__
#define __EOSFramework__event_mgr__

#include <stdio.h>
#include <event2/event.h>
#include <event.h>
#include <event2/dns.h>
#include <event2/thread.h>

struct event_base *event_mgr_base();
struct evdns_base *event_mgr_dnsbase();
int event_mgr_loop();

#endif /* defined(__EOSFramework__event_mgr__) */

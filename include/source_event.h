#ifndef GHERKIN_SOURCE_EVENT_H_
#define GHERKIN_SOURCE_EVENT_H_

#include "event.h"
#include "exports.h"

#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SourceEvent {
    Event event;
    wchar_t* uri;
    const wchar_t* source;
} SourceEvent;

GHERKIN_EXPORT SourceEvent* SourceEvent_new(const char* uri, const wchar_t* source);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_SOURCE_EVENT_H_ */

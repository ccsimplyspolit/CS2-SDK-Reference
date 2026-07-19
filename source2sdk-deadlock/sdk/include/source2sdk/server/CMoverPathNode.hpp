#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x5a0
        // Has VTable
        #pragma pack(push, 1)
        class CMoverPathNode : public source2sdk::server::CPathNode
        {
        public:
            // m_OnStartFromOrInSegment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnStartFromOrInSegment;
            char m_OnStartFromOrInSegment[0x20]; // 0x500            
            // m_OnStoppedAtOrInSegment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnStoppedAtOrInSegment;
            char m_OnStoppedAtOrInSegment[0x20]; // 0x520            
            // m_OnPassThrough has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnPassThrough;
            char m_OnPassThrough[0x20]; // 0x540            
            // m_OnPassThroughForward has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnPassThroughForward;
            char m_OnPassThroughForward[0x20]; // 0x560            
            // m_OnPassThroughReverse has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnPassThroughReverse;
            char m_OnPassThroughReverse[0x20]; // 0x580            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMoverPathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMoverPathNode) == 0x5a0);
    };
};

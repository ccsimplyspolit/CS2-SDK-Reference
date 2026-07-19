#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x11b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PhysMagnet : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            // m_aAttachedObjectsFromServer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_aAttachedObjectsFromServer;
            char m_aAttachedObjectsFromServer[0x18]; // 0x1180            
            // metadata: MNotSaved
            // m_aAttachedObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_aAttachedObjects;
            char m_aAttachedObjects[0x18]; // 0x1198            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PhysMagnet) == 0x11b0);
    };
};

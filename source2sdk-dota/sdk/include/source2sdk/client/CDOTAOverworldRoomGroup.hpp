#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldRoomGroupID_t.hpp"
#include "source2sdk/client/OverworldRoomID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTAOverworldRoomGroup
        {
        public:
            source2sdk::client::OverworldRoomGroupID_t m_unGroupID; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            CUtlString m_strLocName; // 0x8            
            // metadata: MPropertyDescription "The name of the dynamic prop entity in the vmap that this room group is visually parented to."
            CUtlString m_strEntityParentName; // 0x10            
            // metadata: MPropertyDescription "Position in Overworld coordinates."
            Vector2D m_vPosition; // 0x18            
            // metadata: MPropertyDescription "Size in Overworld coordinates. This should completely encompass the dynamic prop entity."
            Vector2D m_vSize; // 0x20            
            // m_vecRooms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldRoomID_t> m_vecRooms;
            char m_vecRooms[0x18]; // 0x28            
            float m_flTrainCarViewDistance; // 0x40            
            Vector2D m_flTrainCarViewOffset; // 0x44            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_unGroupID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_strLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_strEntityParentName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_vPosition) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_vSize) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_vecRooms) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_flTrainCarViewDistance) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoomGroup, m_flTrainCarViewOffset) == 0x44);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldRoomGroup) == 0x50);
    };
};

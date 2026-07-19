#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/DoorState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd50
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BasePropDoor : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0d10[0x10]; // 0xd10
            // metadata: MNotSaved
            source2sdk::client::DoorState_t m_eDoorState; // 0xd20            
            // metadata: MNotSaved
            bool m_modelChanged; // 0xd24            
            // metadata: MNotSaved
            bool m_bLocked; // 0xd25            
            // metadata: MNotSaved
            bool m_bNoNPCs; // 0xd26            
            uint8_t _pad0d27[0x1]; // 0xd27
            // metadata: MNotSaved
            VectorWS m_closedPosition; // 0xd28            
            // metadata: MNotSaved
            QAngle m_closedAngles; // 0xd34            
            // metadata: MNotSaved
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xd40            
            // metadata: MNotSaved
            VectorWS m_vWhereToSetLightingOrigin; // 0xd44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePropDoor) == 0xd50);
    };
};
